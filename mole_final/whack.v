`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:31:24 11/18/2015 
// Design Name: 
// Module Name:    whack 
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
module whack(
    
    // Inputs
    clk, sw, led, reset, god_mode,
    
    // Outputs
    digit0, digit1, digit2, digit3, led_out, sound_enable
    );
    
    input clk;
    input [7:0] sw;
    input [7:0] led;
    input reset;
    input god_mode;
    
    reg [7:0] led_save;
    
    output reg [3:0] digit0;
    output reg [3:0] digit1;
    output reg [3:0] digit2;
    output reg [3:0] digit3;
    output reg [7:0] led_out;
    output reg sound_enable;
    
    
    reg [7:0] state;
    reg god;
    
    initial
    begin
        digit0 <= 0;
        digit1 <= 0;
        digit2 <= 0;
        digit3 <= 0;
        state = 0;
        led_save = 0;
        led_out = 0;
        sound_enable = 0;
    end
    
    always @ (posedge clk)
    begin
        if (reset)
        begin
            digit0 <= 0;
            digit1 <= 0;
            digit2 <= 0;
            digit3 <= 0;
            state = 0;
            led_save = 0;
            led_out = 0;
            sound_enable = 0;
        end
        else
        begin
            sound_enable = 0;
            if (led_save != led)
            begin
                led_save = led;
                led_out = led_save;
            end
            
            if (god_mode)
            begin
                led_out = 8'b11111111;
                god = 1;
            end
            else if (god && !god_mode)
            begin
                led_out = 0;
                god = 0;
            end
        
            if (sw[0] != state[0])
            begin
                if (led_out[0] == 1)
                begin
                    tskScore();
                    sound_enable = 1;
                    led_out[0] = 0;
                end
                state[0] = sw[0];
            end
            
            if (sw[1] != state[1])
            begin
                if (led_out[1] == 1)
                begin
                    tskScore();
                    sound_enable = 1;
                    led_out[1] = 0;
                end
                state[1] = sw[1];
            end
            
            if (sw[2] != state[2])
            begin
                if (led_out[2] == 1)
                begin
                    tskScore();
                    sound_enable = 1;
                    led_out[2] = 0;
                end
                state[2] = sw[2];
            end
            
            if (sw[3] != state[3])
            begin
                if (led_out[3] == 1)
                begin
                   tskScore();
                   sound_enable = 1;
                   led_out[3] = 0;
                end
                state[3] = sw[3];
            end
            
            if (sw[4] != state[4])
            begin
                if (led_out[4] == 1)
                begin
                    tskScore();
                    sound_enable = 1;
                    led_out[4] = 0;
                end
                state[4] = sw[4];
            end
            
            if (sw[5] != state[5])
            begin
                if (led_out[5] == 1)
                begin
                    tskScore();
                    sound_enable = 1;
                    led_out[5] = 0;
                end
                state[5] = sw[5];
            end
            
            if (sw[6] != state[6])
            begin
                if (led_out[6] == 1)
                begin
                    tskScore();
                    sound_enable = 1;
                    led_out[6] = 0;
                end
                state[6] = sw[6];
            end
            
            if (sw[7] != state[7])
            begin
                if (led_out[7] == 1)
                begin
                    tskScore();
                    sound_enable = 1;
                    led_out[7] = 0;
                end
                state[7] = sw[7];
            end
        
        end
    end
    
    task tskScore;

    begin
        if (digit3 >= 9)
        begin
            if (digit2 >= 9)
            begin
                if (digit1 >= 9)
                begin
                   if (digit0 < 9)
                   begin
                        digit0 <= digit0 + 1;
                        digit1 <= 0;
                   end   
                   else
                        digit0 <= 9;
                end
                else
                begin
                    digit1 <= digit1 + 1;

                end
                digit2 <= 0;
                
            end
            else
            begin
                digit2 <= digit2 + 1;
            end
            digit3 <= 0;
        end
        else
        begin
            digit3 <= digit3 + 1;
        end
    end
    
   endtask


endmodule
