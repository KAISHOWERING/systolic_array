module top_wrapper (
    input clk_i,
    input rst_i,

    input [9:0] addr_i,
    input [31:0] data_i,

    input [3:0] wr_vi,

    output [19-1+1:0] data_o
);
top i0(
    .clk_i(clk_i),
    .rst_i(~rst_i),
    .addr_i(addr_i[9:2]),
    .data_i(data_i),
    .wr_vi(wr_vi[3]|wr_vi[2]|wr_vi[1]|wr_vi[0]),
    .data_o(data_o)
);


endmodule