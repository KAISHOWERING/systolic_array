module PE #(
parameter x_w = 8,
parameter mac_w = 19//8*8 array
)
(
input clk_i,
input rst_i,
input [x_w-1:0] x_i,//x stream from left to right
input [mac_w-1:0] mac_i,//8+8+3,mac stream from up to down 
input [x_w-1:0] w_i,//weight data provided by ram 
input x_v_i,//x valid signal
input mac_v_i,//mac valid signal 


output reg [x_w-1:0] x_o,
output reg [x_w-1:0] mac_o,
output reg x_v_o,
output reg mac_v_o
);
reg [x_w-1:0] w_i_r;
always @(w_i) begin
    w_i_r <= w_i;
end
// identify x_o
always@(posedge clk_i or negedge rst_i)
    if (!rst_i) begin
        x_o <= 8'h00;
    end
    else begin
        if (x_v_i) x_o <= x_i;
    end
// identify x_v_o and mac_v_o
//2 ways to clear valid signal : provide 0 signal or rst
always @(posedge clk_i or negedge rst_i) begin
     if (!rst_i) begin
        x_v_o <= 0;
        mac_v_o <= 0;
    end 
    else begin
        x_v_o <= x_v_i;
        mac_v_o <= mac_v_i;
    end
end
// identify mac_o
always @(posedge clk_i or negedge rst_i) begin
     if (!rst_i) begin
       mac_o <= 19'b0000_0000_0000_0000_000;
    end
    else begin
        if(x_v_i && mac_v_i) mac_o <= x_i*w_i_r + mac_i;
    end
end

endmodule

//1073741824
//1134548746