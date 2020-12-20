module top #(
    parameter mac_w = 19,
    parameter x_w = 8,
    parameter array_width = 8,
    parameter array_height = 8
)(
    input clk_i,
    input rst_i,

    input [7:0] addr_i,
    input [31:0] data_i,

    input wr_vi,

    output [mac_w-1:0] data_o
);

wire [array_width-1:0][mac_w-1:0] mac;
wire [array_width-1:0] mac_v;

reg [5:0] cnt_24_r;
always_ff @(posedge clk_i or negedge rst_i)begin
    if (!rst_i)begin
         cnt_24_r <= 24;
    end
    else if(cnt_24_r < 24) cnt_24_r <= cnt_24_r + 1;
    else if(addr_i[7:6] == 2'b11 && wr_vi) cnt_24_r <= 0; 
end

pe_array i1(
    .clk_i(clk_i),
    .rst_i(rst_i),
    .w_i(data_i[x_w-1:0]),
    .w_addr_i(addr_i[5:0]),
    .w_en_i(addr_i[7:6] == 0 && wr_vi),//地址0~63存weight
    .rbuf_waddr_i(addr_i[5:0]),
    .rbuf_wdata_i(data_i[x_w-1:0]),
    .rbuf_w_vi(addr_i[7:6] == 2'b01 && wr_vi),//地址64~127存data
    .start_vi(addr_i[7:6] == 2'b11 && wr_vi),// 地址128~191存output
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
        .rdata_o(rdata[i]), 
        .cdata_i(data_i[mac_w-1:0]),
        .cw_vi(addr_i[7:6] == 2'b10 && wr_vi)
    );
end

reg [1:0] addr_76_r;
always_ff @(posedge clk_i or negedge rst_i)begin
    addr_76_r <= addr_i[7:6];
end

assign data_o = addr_76_r == 2'b10 ? rdata[addr_i[5:3]] : {18'b0, cnt_24_r == 24};

initial begin
    $dumpfile("top.fst");
    $dumpvars;
end

endmodule