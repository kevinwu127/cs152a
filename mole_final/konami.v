`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:04:21 11/30/2015 
// Design Name: 
// Module Name:    konami 
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
module konami(

    // Inputs
    up_btn, down_btn, left_btn, right_btn, mid_btn,
    clk,
    
    // Outputs
    god_mode
    );
    
    input up_btn, down_btn, left_btn, right_btn, mid_btn;
    input clk;
    output reg god_mode = 0;
    
    reg [8:0] mem = 0;
    
    reg up_btn_sig = 0;
    reg down_btn_sig = 0;
    reg left_btn_sig = 0;
    reg right_btn_sig = 0;
    reg mid_btn_sig = 0;
    
    always @ (posedge clk)
    begin
    
        if (up_btn && !down_btn && !left_btn && !right_btn && !mid_btn)
            up_btn_sig = 1;
        else if (!up_btn && down_btn && !left_btn && !right_btn && !mid_btn)
            down_btn_sig = 1;
            
        else if (!up_btn && !down_btn && left_btn && !right_btn && !mid_btn)
            left_btn_sig = 1; 
            
        else if (!up_btn && !down_btn && !left_btn && right_btn && !mid_btn)
            right_btn_sig = 1;
        else if (!up_btn && !down_btn && !left_btn && !right_btn && mid_btn)
            mid_btn_sig = 1;
        else if (!up_btn && !down_btn && !left_btn && !right_btn && !mid_btn)
        begin
            if (up_btn_sig)
            begin
                if (mem == 0)
                    mem = 9'b100000000;
                else 
                    mem = 0;
                up_btn_sig = 0;
            end
            else if (down_btn_sig)
            begin
                if (mem == 9'b100000000)
                    mem = 9'b110000000;
               
                else
                    mem = 0;
                down_btn_sig = 0;
            end
            else if (left_btn_sig)
            begin
                if (mem == 9'b110000000)
                    mem = 9'b111000000;
                else
                    mem = 0;
                left_btn_sig = 0;
            end
            else if (right_btn_sig)
            begin
                if (mem == 9'b111000000)
                    mem = 9'b111100000;
                else
                    mem = 0;
                right_btn_sig = 0;
            end
        end
        
        if (mem == 9'b111100000)
        begin
            god_mode = ~god_mode;
            mem = 0;
        end
    end
    
    


endmodule
