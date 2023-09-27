module fmc_fpga(
    input sys_clk,         //    时钟
    input sys_rst_n,       //    复位
    input FPGA_NL_NADV,    //    地址复用有效信号
    input FPGA_CS_NEL,     //    片选
    input FPGA_WR_NWE,     //    写使能
    input FPGA_RD_NOE,     //    读使能    
    inout [15:0] FPGA_DB,  //    双向地址/数据总线
    //spi interface
	output spi_cs        ,//SPI从机的片选信号，低电平有效。
	output spi_clk       ,//主从机之间的数据同步时钟。
	output spi_mosi       ,//数据引脚，主机输出，从机输入。
	input  spi_miso_a    ,//数据引脚，主机输入，从机输出。
	input  spi_miso_b     //数据引脚，主机输入，从机输出。
);

wire clk_fmc;
wire [15:0] data_0;     // 数据0,a0
wire [15:0] data_1;     // 数据1,a1
wire [15:0] data_2;     // 数据2,b0
wire [15:0] data_3;     // 数据3,b1
wire [15:0] data_4;     // 数据4
wire [15:0] data_5;     // 数据5
wire [15:0] data_6;     // 数据6
wire [15:0] data_7;     // 数据7
wire [15:0] data_8;     // 数据8
wire [15:0] data_9;     // 数据9
wire [15:0] data_10;    // 数据10
wire [15:0] data_11;    // 数据11
wire [15:0] data_12;    // 数据12
wire [15:0] data_13;    // 数据13
wire [15:0] data_14;    // 数据14
wire [15:0] data_15;    // 数据15

//wire define
wire        spi_start  ;
wire [19:0] spi_cmd    ;
wire        clk_40m    ;
wire        clk_60m    ;
wire        locked     ;
wire        stdone     ;
wire        idel_flag_r;
wire [19:0] r_data_a   ;
wire [19:0] r_data_b   ;

//时钟PLL
ip_pll PLL_CLK(
	.areset(~sys_rst_n),
    .inclk0(sys_clk),
    .c0(clk_40m),
    .c1(clk_60m),
    .c2(clk_fmc),
	.locked(locked)
);

//FMC控制
fmc_control fmc_control1(
    .clk(clk_fmc),                // 系统时钟
    .rst(sys_rst_n),              // 复位
    .fpga_nl_nadv(FPGA_NL_NADV),  //    地址复用有效信号    
    .fpga_cs_ne1(FPGA_CS_NEL),    //    片选    
    .fpga_wr_nwe(FPGA_WR_NWE),    //    写使能    
    .fpga_rd_noe(FPGA_RD_NOE),    //    读使能        
    .fpga_db(FPGA_DB),            //    双向地址/数据总线
    
    .write_data_0    (data_0 ),     // FPGA  -> STM32 通道0
    .write_data_1    (data_1 ),     // FPGA  -> STM32 通道1
    .write_data_2    (data_2 ),     // FPGA  -> STM32 通道2
    .write_data_3    (data_3 ),     // FPGA  -> STM32 通道3
    .write_data_4    (data_4 ),     // FPGA  -> STM32 通道4
    .write_data_5    (data_5 ),     // FPGA  -> STM32 通道5
    .write_data_6    (data_6 ),     // FPGA  -> STM32 通道6
    .write_data_7    (data_7 ),     // FPGA  -> STM32 通道7
    .write_data_8    (data_8 ),     // FPGA  -> STM32 通道8
    .write_data_9    (data_9 ),     // FPGA  -> STM32 通道9
    .write_data_10(data_10),     // FPGA  -> STM32 通道10
    .write_data_11(data_11),     // FPGA  -> STM32 通道11
    .write_data_12(data_12),     // FPGA  -> STM32 通道12
    .write_data_13(data_13),     // FPGA  -> STM32 通道13
    .write_data_14(data_14),     // FPGA  -> STM32 通道14
    .write_data_15(data_15),     // FPGA  -> STM32 通道15
                                 
    // .read_data_0 (data_0 ),      // STM32 -> FPGA  通道0
    // .read_data_1 (data_1 ),      // STM32 -> FPGA  通道1
    // .read_data_2 (data_2 ),      // STM32 -> FPGA  通道2
    // .read_data_3 (data_3 ),      // STM32 -> FPGA  通道3
    // .read_data_4 (data_4 ),      // STM32 -> FPGA  通道4
    // .read_data_5 (data_5 ),      // STM32 -> FPGA  通道5
    // .read_data_6 (data_6 ),      // STM32 -> FPGA  通道6
    // .read_data_7 (data_7 ),      // STM32 -> FPGA  通道7
    // .read_data_8 (data_8 ),      // STM32 -> FPGA  通道8
    // .read_data_9 (data_9 ),      // STM32 -> FPGA  通道9
    // .read_data_10(data_10),      // STM32 -> FPGA  通道10
    // .read_data_11(data_11),      // STM32 -> FPGA  通道11
    // .read_data_12(data_12),      // STM32 -> FPGA  通道12
    // .read_data_13(data_13),      // STM32 -> FPGA  通道13
    // .read_data_14(data_14),      // STM32 -> FPGA  通道14
    // .read_data_15(data_15)       // STM32 -> FPGA  通道15
);

//ads8363控制
ads8363_read u_ads8363_read(
    .sys_clk            (clk_40m),
    .sys_rst_n          (sys_rst_n&&locked),

    .idel_flag_r        (idel_flag_r),
    .spi_start          (spi_start),
    .spi_cmd            (spi_cmd),

    .r_data_a           (r_data_a),
    .r_data_b           (r_data_b),
    .data_a0            (data_0),
    .data_a1            (data_1),
    .data_b0            (data_2),
    .data_b1            (data_3)
);

//ads8363 SPI通信
spi_drive_20b u_spi_drive(
	.clk                (clk_40m),
	.sys_rst_n		    (sys_rst_n&&locked),
    .clk_3times         (clk_60m),
	.spi_start          (spi_start),
	.spi_cmd            (spi_cmd),
	.idel_flag_r        (idel_flag_r),
    .r_data_a           (r_data_a),
    .r_data_b           (r_data_b),
	
	.spi_cs             (spi_cs),
	.spi_clk            (spi_clk),
	.spi_mosi           (spi_mosi),
	.spi_miso_a         (spi_miso_a),
	.spi_miso_b         (spi_miso_b)
);

endmodule