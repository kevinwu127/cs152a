`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:05:13 11/23/2015 
// Design Name: 
// Module Name:    random 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module random(

   // Inputs
    clk, reset,

    // Outputs
    data
    
    );

    input clk;
    input reset;
    
    output reg [4:0] data;
    reg [4:0] data_next;
    
    always @* begin
        data_next[4] = data[4]^data[1];
        data_next[3] = data[3]^data[0];
        data_next[2] = data[2]^data_next[4];
        data_next[1] = data[1]^data_next[3];
        data_next[0] = data[0]^data_next[2];
    end
    
    
    
    always @(posedge clk)
    begin
        if (reset)
            data <= 5'h1f;
        else
            data <= data_next;
    end

endmodule
