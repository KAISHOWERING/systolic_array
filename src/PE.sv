module PE #(
    parameter x_w = 8,
    parameter w_w = 8,
    parameter mac_w = 19//8*8 array
)
(
    input clk_i,
    input rst_i,
    
    input signed [x_w-1:0] x_i,//x stream from left to right
    input x_v_i,//x valid signal    

    input signed [mac_w-1:0] mac_i,//8+8+3,mac stream from up to down 
    input mac_v_i,//mac valid signal 

    input [w_w-1:0] w_i,//weight data provided by ram 
    input wr_en_i,

    output reg [x_w-1:0] x_o,
    output reg x_v_o,
    
    output reg signed [mac_w-1:0] mac_o,
    output reg mac_v_o
);
//  identify weight
reg signed [w_w-1:0] w_r;
always_ff @(posedge clk_i or negedge rst_i)begin
    if (!rst_i)begin
        w_r <= 0;
    end
    else if (wr_en_i) begin
        w_r <= w_i;
    end
end

// identify x_o
always_ff @(posedge clk_i or negedge rst_i)
    if (!rst_i) begin
        x_o <= '0;
    end
    else begin
        if (x_v_i) x_o <= x_i;
    end
// identify x_v_o and mac_v_o
// 2 ways to clear valid signal : provide 0 signal or rst
always_ff @(posedge clk_i or negedge rst_i) begin
     if (!rst_i) begin
        x_v_o <= 0;
        mac_v_o <= 0;
    end 
    else begin
        x_v_o <= x_v_i;
        mac_v_o <= mac_v_i && x_v_i;
    end
end
// identify mac_o
always_ff @(posedge clk_i or negedge rst_i) begin
     if (!rst_i) begin
       mac_o <= '0;
    end
    else begin
        if(x_v_i && mac_v_i) mac_o <= x_i*w_r + mac_i;
    end
end

endmodule

//1073741824