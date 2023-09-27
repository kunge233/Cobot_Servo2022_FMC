module fmc_control(
    input  clk,                     //    时钟
    input  rst,                     //    复位
    input  fpga_nl_nadv,            // 地址复用有效信号
    input  fpga_cs_ne1,             // 片选
    input  fpga_wr_nwe,             // 写使能
    input  fpga_rd_noe,             // 读使能
    inout  [15:0] fpga_db,          //    双向地址/数据总线
    
    input  [15:0] write_data_0,     // FPGA  -> STM32 通道0
    input  [15:0] write_data_1,     // FPGA  -> STM32 通道1
    input  [15:0] write_data_2,     // FPGA  -> STM32 通道2
    input  [15:0] write_data_3,     // FPGA  -> STM32 通道3
    input  [15:0] write_data_4,     // FPGA  -> STM32 通道4
    input  [15:0] write_data_5,     // FPGA  -> STM32 通道5
    input  [15:0] write_data_6,     // FPGA  -> STM32 通道6
    input  [15:0] write_data_7,     // FPGA  -> STM32 通道7
    input  [15:0] write_data_8,     // FPGA  -> STM32 通道8
    input  [15:0] write_data_9,     // FPGA  -> STM32 通道9
    input  [15:0] write_data_10,    // FPGA  -> STM32 通道10
    input  [15:0] write_data_11,    // FPGA  -> STM32 通道11
    input  [15:0] write_data_12,    // FPGA  -> STM32 通道12
    input  [15:0] write_data_13,    // FPGA  -> STM32 通道13
    input  [15:0] write_data_14,    // FPGA  -> STM32 通道14
    input  [15:0] write_data_15,    // FPGA  -> STM32 通道15
    
    output [15:0] read_data_0,     // STM32 -> FPGA  通道0
    output [15:0] read_data_1,     // STM32 -> FPGA  通道1
    output [15:0] read_data_2,     // STM32 -> FPGA  通道2
    output [15:0] read_data_3,     // STM32 -> FPGA  通道3
    output [15:0] read_data_4,     // STM32 -> FPGA  通道4
    output [15:0] read_data_5,     // STM32 -> FPGA  通道5
    output [15:0] read_data_6,     // STM32 -> FPGA  通道6
    output [15:0] read_data_7,     // STM32 -> FPGA  通道7
    output [15:0] read_data_8,     // STM32 -> FPGA  通道8
    output [15:0] read_data_9,     // STM32 -> FPGA  通道9
    output [15:0] read_data_10,    // STM32 -> FPGA  通道10
    output [15:0] read_data_11,    // STM32 -> FPGA  通道11
    output [15:0] read_data_12,    // STM32 -> FPGA  通道12
    output [15:0] read_data_13,    // STM32 -> FPGA  通道13
    output [15:0] read_data_14,    // STM32 -> FPGA  通道14
    output [15:0] read_data_15     // STM32 -> FPGA  通道15
);

reg [15:0] read_data_0_reg;         // STM32 -> FPGA  通道0寄存器
reg [15:0] read_data_1_reg;         // STM32 -> FPGA  通道1寄存器
reg [15:0] read_data_2_reg;         // STM32 -> FPGA  通道2寄存器
reg [15:0] read_data_3_reg;         // STM32 -> FPGA  通道3寄存器
reg [15:0] read_data_4_reg;         // STM32 -> FPGA  通道4寄存器
reg [15:0] read_data_5_reg;         // STM32 -> FPGA  通道5寄存器
reg [15:0] read_data_6_reg;         // STM32 -> FPGA  通道6寄存器
reg [15:0] read_data_7_reg;         // STM32 -> FPGA  通道7寄存器
reg [15:0] read_data_8_reg;         // STM32 -> FPGA  通道8寄存器
reg [15:0] read_data_9_reg;         // STM32 -> FPGA  通道9寄存器
reg [15:0] read_data_10_reg;        // STM32 -> FPGA  通道10寄存器
reg [15:0] read_data_11_reg;        // STM32 -> FPGA  通道11寄存器
reg [15:0] read_data_12_reg;        // STM32 -> FPGA  通道12寄存器
reg [15:0] read_data_13_reg;        // STM32 -> FPGA  通道13寄存器
reg [15:0] read_data_14_reg;        // STM32 -> FPGA  通道14寄存器
reg [15:0] read_data_15_reg;        // STM32 -> FPGA  通道15寄存器

assign read_data_0  = read_data_0_reg;
assign read_data_1  = read_data_1_reg; 
assign read_data_2  = read_data_2_reg; 
assign read_data_3  = read_data_3_reg; 
assign read_data_4  = read_data_4_reg; 
assign read_data_5  = read_data_5_reg; 
assign read_data_6  = read_data_6_reg; 
assign read_data_7  = read_data_7_reg; 
assign read_data_8  = read_data_8_reg; 
assign read_data_9  = read_data_9_reg; 
assign read_data_10 = read_data_10_reg;
assign read_data_11 = read_data_11_reg;
assign read_data_12 = read_data_12_reg;
assign read_data_13 = read_data_13_reg;
assign read_data_14 = read_data_14_reg;
assign read_data_15 = read_data_15_reg;
        
wire fmc_wr_en;    //写使能
assign fmc_wr_en = ((!fpga_cs_ne1) & (!fpga_wr_nwe) & fpga_nl_nadv);

wire fmc_rd_en;    //读使能
assign fmc_rd_en = ((!fpga_cs_ne1) & (!fpga_rd_noe) & fpga_nl_nadv);

reg [15:0] rd_data_reg;    //读取数据缓存器
//当读使能为高时，fpga_db=fmc_rd_en；为低时，fpga_db为高阻抗；
assign fpga_db = fmc_rd_en ? rd_data_reg : 16'hzzzz;
wire [15:0] addr;    //地址
assign addr = ((fpga_nl_nadv == 1'b0) & (fpga_cs_ne1 == 1'b0)) ? fpga_db : addr;

always @(posedge clk or negedge rst)
begin
    if(!rst)
        begin
            read_data_0_reg  <= 16'd0;
            read_data_1_reg  <= 16'd0;
            read_data_2_reg  <= 16'd0;
            read_data_3_reg  <= 16'd0;
            read_data_4_reg  <= 16'd0;
            read_data_5_reg  <= 16'd0;
            read_data_6_reg  <= 16'd0;
            read_data_7_reg  <= 16'd0;
            read_data_8_reg  <= 16'd0;
            read_data_9_reg  <= 16'd0;
            read_data_10_reg <= 16'd0;
            read_data_11_reg <= 16'd0;
            read_data_12_reg <= 16'd0;
            read_data_13_reg <= 16'd0;
            read_data_14_reg <= 16'd0;
            read_data_15_reg <= 16'd0;
        end
    // else if(fmc_wr_en)    //接收STM32发送的数据
    //     begin
    //         case(addr)
    //             16'h0000: read_data_0_reg  <= fpga_db;
    //             16'h0001: read_data_1_reg  <= fpga_db;    
    //             16'h0002: read_data_2_reg  <= fpga_db;     
    //             16'h0003: read_data_3_reg  <= fpga_db;    
    //             16'h0004: read_data_4_reg  <= fpga_db;    
    //             16'h0005: read_data_5_reg  <= fpga_db;    
    //             16'h0006: read_data_6_reg  <= fpga_db;    
    //             16'h0007: read_data_7_reg  <= fpga_db;     
    //             16'h0008: read_data_8_reg  <= fpga_db;    
    //             16'h0009: read_data_9_reg  <= fpga_db;     
    //             16'h000A: read_data_10_reg <= fpga_db;    
    //             16'h000B: read_data_11_reg <= fpga_db;    
    //             16'h000C: read_data_12_reg <= fpga_db;     
    //             16'h000D: read_data_13_reg <= fpga_db;    
    //             16'h000E: read_data_14_reg <= fpga_db;  
    //             16'h000F: read_data_15_reg <= fpga_db;  
    //             default: ;
    //         endcase
    //     end
    else if(fmc_rd_en)    //向STM32发送数据
        begin
            case(addr)
                16'h0000: rd_data_reg <= write_data_0;    
                16'h0001: rd_data_reg <= write_data_1;    
                16'h0002: rd_data_reg <= write_data_2;    
                16'h0003: rd_data_reg <= write_data_3;    
                16'h0004: rd_data_reg <= write_data_4;    
                16'h0005: rd_data_reg <= write_data_5;    
                16'h0006: rd_data_reg <= write_data_6;    
                16'h0007: rd_data_reg <= write_data_7;        
                16'h0008: rd_data_reg <= write_data_8;        
                16'h0009: rd_data_reg <= write_data_9;    
                16'h000A: rd_data_reg <= write_data_10;
                16'h000B: rd_data_reg <= write_data_11;
                16'h000C: rd_data_reg <= write_data_12;
                16'h000D: rd_data_reg <= write_data_13;
                16'h000E: rd_data_reg <= write_data_14;
                16'h000F: rd_data_reg <= write_data_15;
            endcase
        end
end

endmodule
