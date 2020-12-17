module pe_array #(
    parameter array_width = 8,
    parameter array_height = 8,
    parameter x_w = 8,
    parameter w_w = 8,
    parameter mac_w = 19,
    parameter rbuf_depth = 8
)
(
    input clk_i,
    input rst_i,

    input [w_w-1:0] w_i,
    input [$clog2(array_width*array_height)-1:0] w_addr_i,
    input w_en_i,

    input [$clog2(array_height) + $clog2(rbuf_depth)-1:0] rbuf_waddr_i,
    input [x_w-1:0] rbuf_wdata_i,
    input rbuf_w_vi,

    input start_vi,

    output [array_width-1:0][mac_w-1:0] mac_o,
    output [array_width-1:0] mac_v_o
);

wire [array_height:0] start_v;
wire [array_height:0][array_width-1:0][mac_w-1:0] pe_mac;
wire [array_height:0][array_width-1:0] pe_mac_v;


for(genvar i = 0; i < array_height; ++i) begin: pe_column
    wire cc_to_pe;
    wire [x_w-1:0] rdata;

    wire [array_width:0][x_w-1:0] pe_x;
    //valid
    wire [array_width:0] pe_x_v;
    //tie vertical signal with horisonal signal
    
    read_buf #(
        .x_w(x_w)
        ,.depth(rbuf_depth)
    ) rbuf (
        .clk_i(clk_i),
        .rst_i(rst_i),

        .start_vi(start_v[i]),
        .d_o(pe_x[0]),//修改
        .v_vo(pe_x_v[0]),//修改

        .addr_w_i(rbuf_waddr_i[$clog2(rbuf_depth)-1:0]),
        .data_w_i(rbuf_wdata_i),
        .w_vi(rbuf_waddr_i[$clog2(array_height) + $clog2(rbuf_depth)-1:$clog2(rbuf_depth)] == i && rbuf_w_vi)
        //修改
    );
    //data

    assign start_v[i + 1] = pe_x_v[0];//修改


    for(genvar j = 0; j < array_width; ++j) begin: pe_row
        PE #(
            .x_w(x_w)
            ,.w_w(w_w)
            ,.mac_w(mac_w)
        ) pe (
            .clk_i(clk_i)
            ,.rst_i(rst_i)
            ,.x_i(pe_x[j])
            ,.x_v_i(pe_x_v[j])

            ,.mac_i(pe_mac[i][j])
            ,.mac_v_i(pe_mac_v[i][j])

            ,.w_i(w_i)
            ,.wr_en_i(w_addr_i == j+i*array_width && w_en_i)

            ,.x_o(pe_x[j+1])
            ,.x_v_o(pe_x_v[j+1])

            ,.mac_o(pe_mac[i+1][j])
            ,.mac_v_o(pe_mac_v[i+1][j])
        );
    end

end

assign start_v[0] = start_vi;
assign pe_mac[0] = '0;
assign pe_mac_v[0] = '1;

assign mac_o = pe_mac[array_height];
assign mac_v_o = pe_mac_v[array_height];

endmodule
