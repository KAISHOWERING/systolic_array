module exam();

parameter array_width = 8;
parameter array_height = 8;
parameter x_w = 8;
parameter w_w = 8;
parameter mac_w = 19;
parameter rbuf_depth = 8;

reg rst_n;
reg clk_i;
reg [w_w-1:0] w_i;
reg [$clog2(array_width*array_height)-1:0] w_addr_i;
reg w_en_i;

reg [$clog2(array_height) + $clog2(rbuf_depth)-1:0] rbuf_waddr_i;
reg [x_w-1:0] rbuf_wdata_i;
reg rbuf_w_vi;

reg start_vi;

wire [array_width-1:0][mac_w-1:0] mac_o;
wire [array_width-1:0] mac_v_o;
pe_array i1(
    .*
);

initial
begin
rst_n = 1;
clk_i = 0;
//写入权重数据
w_i = 8'b00001111;
//64个权重,高3位列低3位行
w_addr_i = 6'b000000;
//控制向PE阵列写权重时的写使能信号
w_en_i = 0;
//高3位表示第几行的寄存器，低3位表示该行寄存器存的数据位置。变化64次。
rbuf_waddr_i = 6'b000000;
//写入数据，变化64次
rbuf_wdata_i = 8'b0000_0000;
//写使能信号
rbuf_w_vi = 0;
//阵列开始工作标志，应当在所有数据全部写入后置1
start_vi = 0;
//最后一行的mac输出
//[array_width-1:0][mac_w-1:0] mac_o;
//最后一行的mac使能
//[array_width-1:0] mac_v_o;
end

always
begin
       #10
            clk=~clk;
end 