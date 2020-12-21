module o_buf #(
  parameter width = 19,
  parameter depth = 8
)(
  input clk_i,
  input rst_i,

  input [width-1:0] wdata_i,
  input wdata_vi,

  input [$clog2(depth)-1:0] raddr_i,
  output reg [width-1+1:0] rdata_o,//分块拓展

  input [width-1:0] cdata_i, //bias
  input cw_vi //bias en 
);

reg [$clog2(depth)-1:0] cnt_r;

always_ff @(posedge clk_i or negedge rst_i) begin
  if(!rst_i) cnt_r <= '0;
  else if(wdata_vi) cnt_r <= cnt_r + 1;
end

reg [depth-1:0][width-1+1:0] data_r;//分块拓展

always_ff @(posedge clk_i or negedge rst_i) begin
  assert (wdata_vi && cw_vi != 1) else $error("It's gone wrong");
  if(wdata_vi) data_r[cnt_r] <= wdata_i + data_r[cnt_r];
  else if(cw_vi) data_r[raddr_i] <= {1'b0,cdata_i};//分块拓展
end

always_ff @(posedge clk_i or negedge rst_i) begin
  if(!rst_i) rdata_o <= '0;
  else rdata_o <= data_r[raddr_i];//分块拓展
end


endmodule
