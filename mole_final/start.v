`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:40:34 11/20/2015 
// Design Name: 
// Module Name:    start 
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
module start(

    // Input
    btn, clk, reset,
    
    // Output
    enable
    );
    
    input btn;
    input clk;
    input reset;
    
    output reg enable;
    
    initial
    begin
        enable = 0;
    end
    
    always @ (posedge clk)
    begin
    if (reset)
        enable = 0;
    else
        if (btn)
            enable = 1;
    end


endmodule
