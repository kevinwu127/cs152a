`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:01:25 11/20/2015 
// Design Name: 
// Module Name:    reset 
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
module reset(

    // Inputs
    btn, clk,
    
    // Outputs
    reset
    );

    input btn;
    input clk;
    
    output reg reset;
    
    initial
    begin
        reset = 0;
    end
    
    always @ (posedge clk)
    begin
        if (btn)
            reset = 1;
        else
            reset = 0;
    end

endmodule
