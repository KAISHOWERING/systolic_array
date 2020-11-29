module weight_ram #(
    parameter width = 32,
    parameter depth = 256
)
(
    input clk_i,
    input [width-1:0] data_i,
    input [$clog2(depth)-1:0] addr_wr_i,
    input [$clog2(depth)-1:0] addr_rd_i,
    input wr_en_i,
    input rd_en_i,

    output [width-1:0] data_o
);
reg [width-1:0] data_i_r [$clog2(depth)-1:0];
reg [$clog2(depth)-1:0] addr_rd_r;
reg rd_en_reg;
//write data
always @(posedge clk_i) begin
    if (wr_en_i)
    data_i_r[addr_wr_i] <= data_i;
end
//write addr
always @(posedge clk_i) begin
    addr_rd_r <= addr_rd_i;
end
//write en signal
always @(posedge clk_i) begin
    rd_en_reg <= rd_en_i;
end
assign data_o = rd_en_reg?data_i_r[addr_rd_r]:0;
endmodule