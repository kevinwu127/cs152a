`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:05:46 11/16/2015 
// Design Name: 
// Module Name:    mole 
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
module mole(

    // Inputs
     enable, clk, reset, difficulty,
    // Outputs
     led, mole, blink, end_enable, start_enable
    );
    
    input enable;
    input clk;
    input reset;
    input difficulty;
    input [4:0] mole;
    
    output reg [7:0] led;
    output reg blink = 0;
    output reg end_enable;
    output reg start_enable;

    reg [4:0] data;
    integer i = 0;
    
    initial
    begin
        i = 0;
        led = 0;
        data = 0;
        end_enable = 0;
    end
    
    always @ (posedge clk)
    begin
        if (reset)
        begin
            i = 0;
            blink = 0;
            led = 0;
            end_enable = 0;
        end
        
        else
        begin
            if (enable)
            begin
                if (i == 31) //game length in seconds
                begin
                    end_enable = ~end_enable;
                    blink = 1;
                    led = 0;
                end
                else if ( i == 0)
                begin
                    start_enable = ~start_enable;
                    i = i + 1;
                end
                else
                begin
                    //mole = mem[i];
                    start_enable = 0;
                    end_enable = 0;
                    if (difficulty)
                    begin
                        data = mole%16;
                        case (data)
                              0 : begin
                                         led = 8'b01111111;
                                    end
                              1: begin
                                         led = 8'b10111111;
                                    end
                              2: begin
                                         led = 8'b11011111;
                                    end
                              3: begin
                                         led = 8'b11101111;
                                    end
                              4: begin
                                         led = 8'b11110111;
                                    end
                              5: begin
                                         led = 8'b11111011;
                                    end
                              6: begin
                                         led = 8'b11111101;
                                    end
                              7: begin
                                         led = 8'b11111110;
                                    end
                              8 : begin
                                         led = 8'b01111110;
                                    end
                              9: begin
                                         led = 8'b10110111;
                                    end
                              10: begin
                                         led = 8'b01011111;
                                    end
                              11: begin
                                         led = 8'b11101101;
                                    end
                              12: begin
                                         led = 8'b11100111;
                                    end
                              13: begin
                                         led = 8'b11111010;
                                    end
                              14: begin
                                         led = 8'b10111101;
                                    end
                              15: begin
                                         led = 8'b11011110;
                                    end                    
                         endcase
                     end
                     else
                     begin
                        data = mole%8;
                        case (data)
                          0 : begin
                                     led = 8'b01111111;
                                end
                          1: begin
                                     led = 8'b10111111;
                                end
                          2: begin
                                     led = 8'b11011111;
                                end
                          3: begin
                                     led = 8'b11101111;
                                end
                          4: begin
                                     led = 8'b11110111;
                                end
                          5: begin
                                     led = 8'b11111011;
                                end
                          6: begin
                                     led = 8'b11111101;
                                end
                          7: begin
                                     led = 8'b11111110;
                                end
                        endcase
                     end
                     led = ~led;          
                     i = i + 1;
                end
            end
       end
    end


endmodule
