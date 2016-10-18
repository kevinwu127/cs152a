`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:27:51 11/02/2015 
// Design Name: 
// Module Name:    minute_counter2 
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
module minute_counter2(
    
    out     ,
    enable  ,
    clk     ,
    reset
    
    );
    
    output reg [2:0] out;
    input enable, clk, reset;
    
    initial
    begin
        out = 0;
    end
    
    always @ (posedge clk)
    begin
        if (reset)
            out = 3'b0;
        else if (enable)
        begin
            out = out + 1;
        end         
        out = out % 6;
    end
    
endmodule
