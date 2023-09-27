module ads8363_read(
    input            sys_clk      ,
    input            sys_rst_n    ,
    
    input            idel_flag_r  ,
    output reg       spi_start    ,//spi开启使能。
    output reg[19:0] spi_cmd      ,

    input  [19:0]    r_data_a     ,
    input  [19:0]    r_data_b     ,
    output reg[15:0] data_a0      ,
    output reg[15:0] data_a1      ,
    output reg[15:0] data_b0      ,
    output reg[15:0] data_b1
);

//指令集
parameter   CONVST_RD_CMD =20'h80000;

//reg define
reg[3:0] flash_start;

//generate spi_start
always @(posedge sys_clk or negedge sys_rst_n )begin
    if(!sys_rst_n)
        flash_start<=0;
    else if(flash_start<=5)
        flash_start<=flash_start+1;
    else
        flash_start<=flash_start;
end

always @(posedge sys_clk or negedge sys_rst_n )begin
    if(!sys_rst_n)
        spi_start<=1'b0;
    else if(flash_start==4)
        spi_start<=1'b1;
    else if(idel_flag_r)
        spi_start<=1'b1;
    else
        spi_start<=1'b0;
end

//在每次空闲的上升沿，给出下一次的指令，并把上一次数据整理
always @(posedge idel_flag_r)begin
    spi_cmd=CONVST_RD_CMD;
    if(r_data_a[18] == 0 )
        data_a0<=r_data_a[16:1];
    else
        data_a1<=r_data_a[16:1];
    if(r_data_b[18] == 0 )
        data_b0<=r_data_b[16:1];
    else
        data_b1<=r_data_b[16:1];
end

endmodule