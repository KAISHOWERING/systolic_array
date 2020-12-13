module top #(
    parameter mac_w = 19,
    parameter x_w = 8,
    parameter array_width = 8,
    parameter array_height = 8
)(
    input clk_i,
    input rst_i,

    input [7:0] addr_i,
    input [x_w-1:0] data_i,

    input wr_vi,

    output [mac_w-1:0] data_o
);

wire [array_width-1:0][mac_w-1:0] mac;
wire [array_width-1:0] mac_v;

pe_array i1(
    .clk_i(clk_i),
    .rst_i(rst_i),
    .w_i(data_i),
    .w_addr_i(addr_i[5:0]),
    .w_en_i(addr_i[7:6] == 0 && wr_vi),//地址0~63存weight
    .rbuf_waddr_i(addr_i[5:0]),
    .rbuf_wdata_i(data_i),
    .rbuf_w_vi(addr_i[7:6] == 2'b01 && wr_vi),//地址64~127存data
    .start_vi(addr_i[7:6] == 2'b11 && wr_vi),//地址128~191存output
    .mac_o(mac),
    .mac_v_o(mac_v)
);

wire [7:0][mac_w-1:0] rdata;

for(genvar i = 0; i < array_width; i++) begin: o_buf_gen
    o_buf obuf(
        .clk_i(clk_i),
        .rst_i(rst_i),
        .wdata_i(mac[i]),
        .wdata_vi(mac_v[i]),
        .raddr_i(addr_i[2:0]),
        .rdata_o(rdata[i])
    );
end

assign data_o = rdata[addr_i[5:3]];

initial begin
    $dumpfile("top.fst");
    $dumpvars;
end

endmodule