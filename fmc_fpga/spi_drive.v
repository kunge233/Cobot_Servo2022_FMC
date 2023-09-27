module spi_drive_20b (
    input               clk             ,
    input               sys_rst_n       ,
    input               clk_3times      ,

    //user interface
    input               spi_start       ,//spi开启使能
    input [19:0]        spi_cmd         ,//操作指令,目前只有转换&读指令

    output              idel_flag_r     ,//Rising edge of idle state flag
    output reg [19:0]   r_data_a        ,//读出的数据sdoa
    output reg [19:0]   r_data_b        ,//读出的数据sdob

    //spi interface
    output reg          spi_cs          ,
    output reg          spi_clk         ,
    output reg          spi_mosi        ,
    input               spi_miso_a      ,
    input               spi_miso_b
    //busy is not here
);

//state machine
parameter   IDLE          =4'd0;//idle state
parameter   RandW         =4'd1;//read and write state

//command set
parameter   CONVST_RD_CMD =20'h80000;

//wire define
wire        idel_flag;

//reg define
reg[3:0]  current_state     ;
reg[3:0]  next_state        ;
reg[19:0] cmd_buffer        ;
reg[4:0 ] bit_cnt           ;
reg[1:0 ] clk3_cnt          ;//3倍时钟计数
reg       clk_cnt           ;
reg       dely_cnt          ;
reg[31:0] dely_state_cnt    ;
reg[19:0] rd_data_buffer_a  ;
reg[19:0] rd_data_buffer_b  ;
reg       spi_clk0          ;
reg       stdone            ;
reg       idel_flag0        ;
reg       idel_flag1        ;
reg[2:0 ] miso_a_temp       ;
reg[2:0 ] miso_b_temp       ;

// 多人表决器
function most;
    input a, b, c;
    // f=ab+ac+bc
    most = a&b | a&c | b&c;
endfunction

//*********************************************
//**                main code
//*********************************************

assign idel_flag = (current_state == IDLE) ? 1:0;     //idle state flag
assign idel_flag_r = idel_flag0 && (~idel_flag1);   //posedge of idle state flag

//Generate rising edge of idle state flag
always @(posedge clk or negedge sys_rst_n )begin
    if(!sys_rst_n)begin
        idel_flag0 <= 1'b1;
        idel_flag1 <= 1'b1;
    end
    else begin
        idel_flag0 <= idel_flag;
        idel_flag1 <= idel_flag0;
    end
end

//miso vote, 三倍采样投票表决
always @(posedge clk_3times or negedge sys_rst_n )begin
    if(!sys_rst_n)begin
        miso_a_temp<=3'd0;
        miso_b_temp<=3'd0;
    end
    else begin
        case(clk3_cnt)
            0:
            begin
                miso_a_temp<=3'd0;
                miso_b_temp<=3'd0;
            end

            1:
            begin
                miso_a_temp[0] <= spi_miso_a;
                miso_b_temp[0] <= spi_miso_b;
            end

            2:
            begin
                miso_a_temp[1] <= spi_miso_a;
                miso_b_temp[1] <= spi_miso_b;
            end

            3:
            begin
                miso_a_temp[2] <= spi_miso_a;
                miso_b_temp[2] <= spi_miso_b;
            end

            default: clk3_cnt<=0;
        endcase
    end

end

//clk3time_cnt counter
always @(posedge clk_3times or negedge sys_rst_n )begin
    if(!sys_rst_n)
        clk3_cnt<=2'd0;
    else if(clk_cnt==0&&current_state==RandW&&clk3_cnt<=3)
        clk3_cnt<=clk3_cnt+2'd1;
    else 
        clk3_cnt<=2'd1;
end

//Shift the read out data to register
always @(posedge clk or negedge sys_rst_n )begin
    if(!sys_rst_n)begin
        rd_data_buffer_a<=20'd0;
        rd_data_buffer_b<=20'd0;
    end
    else if(bit_cnt<=2080&&clk_cnt==0&&current_state==RandW)begin                                   
        rd_data_buffer_a<={rd_data_buffer_a[18:0],spi_miso_a};                                   
        rd_data_buffer_b<={rd_data_buffer_b[18:0],spi_miso_b};
    end
    //此处为了投票，将时钟换为高电平采样
    // else if(bit_cnt<=2080&&clk_cnt==1&&current_state==RandW)begin                                   
    //     rd_data_buffer_a<={rd_data_buffer_a[18:0],most(miso_a_temp[2],miso_a_temp[1],miso_a_temp[0])};                                   
    //     rd_data_buffer_b<={rd_data_buffer_b[18:0],most(miso_b_temp[2],miso_b_temp[1],miso_b_temp[0])};
    // end
    else begin
        rd_data_buffer_a<=rd_data_buffer_a;
        rd_data_buffer_b<=rd_data_buffer_b;
    end
end

//Read out data
always @(posedge clk or negedge sys_rst_n )begin//读出的数据
    if(!sys_rst_n)begin
        r_data_a<=20'd0;
        r_data_b<=20'd0;
    end
    else if(bit_cnt==20&&clk_cnt==1&&current_state==RandW)begin
        r_data_a<=rd_data_buffer_a;
        r_data_b<=rd_data_buffer_b;
    end
    //配合上面的投票使用，因为延后了半个周期得到采样值，所以需要补一个0
    // else if(bit_cnt==20&&clk_cnt==1&&current_state==RandW)begin
    //     r_data_a<={rd_data_buffer_a[18:0],1'b0};
    //     r_data_b<={rd_data_buffer_b[18:0],1'b0};
    // end
    else begin
        r_data_a<=r_data_a;
        r_data_b<=r_data_b;
    end
end

//cmd buffer,开启spi的第一个周期准备好数据，并在每一个周期移位
always @(posedge clk or negedge sys_rst_n )begin
    if(!sys_rst_n)
        cmd_buffer<=20'd0;
    else if(spi_cs==0&&dely_cnt==0)
        cmd_buffer<=spi_cmd;
    else if(clk_cnt==1&&current_state==RandW&&bit_cnt<20)
        cmd_buffer<={cmd_buffer[18:0],1'b0};
    else
        cmd_buffer<=cmd_buffer;
end

//clk_cnt counter, use as spi clock
always @(posedge clk or negedge sys_rst_n )begin
    if(!sys_rst_n)
        clk_cnt<=1'd0;
    else if(dely_cnt==1)
        clk_cnt<=clk_cnt+1'd1;
    else 
        clk_cnt<=1'd0;
end

//delay counter, delay begin after chip selected
always @(posedge clk or negedge sys_rst_n )begin
    if(!sys_rst_n)
        dely_cnt<=1'd0;
    else if(spi_cs==0)begin
        if(dely_cnt<1)
            dely_cnt<=dely_cnt+1'd1;
        else
            dely_cnt<=dely_cnt;
    end
    else
        dely_cnt<=1'd0;
end

//辅助状态机运行，拉高cs后不能立即执行其他指令
always @(posedge clk or negedge sys_rst_n )begin
    if(!sys_rst_n)
        dely_state_cnt<=1'd0;
    else if(spi_cs)begin
        if(dely_state_cnt<400000000)
            dely_state_cnt<=dely_state_cnt+1'd1;
        else
            dely_state_cnt<=dely_state_cnt;
    end
    else
        dely_state_cnt<=1'd0;
end

//bit counter ，记录收到的位数
always @(posedge clk or negedge sys_rst_n )begin
    if(!sys_rst_n)
        bit_cnt<=11'd0;
    else if(dely_cnt==1)begin
            if(clk_cnt==1'b1)
                bit_cnt<=bit_cnt+1'd1;
            else
                bit_cnt<=bit_cnt;
    end
    else
        bit_cnt<=11'd0;
end

//***************************************************************
//Three stage state machine
always @(posedge clk or negedge sys_rst_n )begin
    if(!sys_rst_n)
        current_state<=IDLE;
    else
        current_state<=next_state;
end

always @(*)begin

    case(current_state)
    
        IDLE: begin
              if(spi_start&&spi_cmd==CONVST_RD_CMD)
                next_state=RandW;
              else
                next_state=IDLE;
            end
    
        RandW: begin
              if(stdone&&bit_cnt>=20)
                   next_state=IDLE;
              else
                   next_state=RandW;
              end
             
    default: next_state=IDLE;            
    endcase                
end

always @(posedge clk or negedge sys_rst_n )begin
    if(!sys_rst_n) begin
        spi_cs<=1'b1;
        spi_clk<=1'b0;
        spi_clk0<=1'b0;
        spi_mosi<=1'b0;    
        stdone<=1'b0;        
        end
    else begin
        case(current_state)

            IDLE: 
            begin
                spi_cs<=1'b1;
                spi_clk<=1'b0;
                spi_mosi<=1'b0;                
            end

            RandW: 
            begin
                stdone<=1'b0;
                if(dely_state_cnt>0)//10                
                    spi_cs<=1'b0;
                else if(dely_cnt==1&&bit_cnt<20)begin                        
                    spi_clk0<=~spi_clk0;
                    spi_clk<=spi_clk0;
                    spi_mosi<=cmd_buffer[19];
                    end
                else if(bit_cnt==20&&clk_cnt==0)begin
                    spi_clk<=1'b0;
                    spi_mosi<=1'b0;
                    stdone<=1'b1;
                    end
                else if(bit_cnt==20&&clk_cnt==1)begin
                    spi_cs<=1'b1;
                    end
            end

            default:
            begin
                stdone<=1'b0;
                spi_cs<=1'b1;
                spi_clk<=1'b0;
                spi_clk0<=1'b0;
                spi_mosi<=1'b0;                        
            end
        endcase
        end
    end

endmodule