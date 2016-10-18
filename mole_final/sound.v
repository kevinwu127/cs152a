`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:37:38 11/25/2015 
// Design Name: 
// Module Name:    sound 
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
module sound(
    //inputs
    clk,
    enable,
    start_enable,
    end_enable,
    god_mode,
    //outputs
    speaker
    );
    
    
input clk;
input enable;
input start_enable;
input end_enable;
input god_mode;

output reg speaker = 0;

reg activated = 0;
integer count = 0;

always@(posedge clk)
begin

        if (enable || start_enable || end_enable)
        begin
            speaker = ~speaker;
            activated = 1;
            count = 0;
        end
        else
            if (count >= 1000)
            begin
                speaker = 0;
                activated = 0;
            end
            else
                if (activated)
                begin
                    speaker = ~speaker;
                end
        count = count + 1;

    
    
    
end



endmodule
