`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:22:22 10/28/2015 
// Design Name: 
// Module Name:    minute_counter1 
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
module minute_counter1(

    out     ,
    minute2_enable,
    enable  ,
    clk     ,
    reset
    
    );
    
    output reg [3:0] out;
    output reg minute2_enable;
    input enable, clk, reset;
    
    initial
    begin
        out = 0;
        minute2_enable = 0;
    end
    
    always @ (posedge clk)
    begin
        if (reset)
            out = 4'b0;
        else if (enable)
        begin
            out = out + 1;
            if (out == 9)
                minute2_enable = 1;
            else
                minute2_enable = 0;
            out = out % 10;
        end
    end


endmodule
