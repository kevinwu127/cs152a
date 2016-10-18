`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:53:54 11/23/2015 
// Design Name: 
// Module Name:    difficulty 
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
module difficulty(

    // Inputs
    clk, difficulty_btn,
    // Outputs
    difficulty
    );
    
    input clk;
    input difficulty_btn;
    
    output reg difficulty;
    
    integer count;
    
    initial
    begin
        difficulty = 0;
        count = 0;
    end
    
    always @ (posedge clk)
    begin
        if (difficulty_btn)
        begin
            if (count == 0 || count >= 3000)
            begin
                difficulty = ~difficulty;
                count = 0;
            end
            count = count + 1;
        end
        else
            count = 0;
    end


endmodule
