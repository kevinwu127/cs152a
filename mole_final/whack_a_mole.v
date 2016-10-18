`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:35:44 11/16/2015 
// Design Name: 
// Module Name:    whack_a_mole 
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
module whack_a_mole(

    // Inputs
     clk, sw, start, reset_btn, difficulty_btn, left, down,
    
    // Outputs
    led, seg, an, speaker
    );
    
    input clk;
    input [7:0] sw;
    input start;
    input reset_btn;
    input difficulty_btn;
    input left;
    input down;
    
    //reg clk;
    //reg [7:0] sw;
    
    output [7:0] led;
    output [7:0] seg; 
    output [3:0] an;
    output speaker;
    
    wire reset;
    wire enable;
    wire mole_clk;
    wire fast;
    wire blink;
    wire blink_enable;
    wire sound_clk;
    wire sound_enable;
    wire end_enable;
    wire start_enable;
    
    wire [4:0] mole_num;
    
    wire [7:0] led_out;
    
    wire [3:0] digit0;
    wire [3:0] digit1;
    wire [3:0] digit2;
    wire [3:0] digit3;
    
    wire difficulty;
    wire god_mode;
    
    start btn (
        .btn(start),
        .clk(clk),
        .reset(reset),
        .enable(enable)
    );
    
    reset rst (
        .btn(reset_btn),
        .clk(clk),
        .reset(reset)
    );
    
    difficulty diff(
        .clk(fast),
        .difficulty_btn(difficulty_btn),
        .difficulty(difficulty)
    );
    
    clock clock (
        .clk(clk),
        .difficulty(difficulty),
        .mole_clk(mole_clk),
        .fast(fast),
        .blink(blink),
        .sound(sound_clk)
    );
    
    random random (
        .clk(fast),
        .reset(reset),
        .data(mole_num)
    );
    
    mole mole (
        .reset(reset),
        .enable(enable),
        .clk(mole_clk),
        .difficulty(difficulty),
        .led(led_out),
        .mole(mole_num),
        .blink(blink_enable),
        .end_enable(end_enable),
        .start_enable(start_enable)
    );
    
    display display (
        .digit0(digit0),
        .digit1(digit1),
        .digit2(digit2),
        .digit3(digit3),
        .clk(fast),
        .blink(blink),
        .blink_enable(blink_enable),
        .enable(enable),
        .btn(difficulty_btn),
        .difficulty(difficulty),
        .AN(an),
        .seg(seg)
    );
    
    whack whack (
        .reset(reset),
        .clk(fast),
        .sw(sw),
        .god_mode(god_mode),
        .led(led_out),
        .digit0(digit0),
        .digit1(digit1),
        .digit2(digit2),
        .digit3(digit3),
        .led_out(led),
        .sound_enable(sound_enable)
    );
    
    sound sound(
        .clk(sound_clk),
        .enable(sound_enable),
        .start_enable(start_enable),
        .end_enable(end_enable),
        .speaker(speaker),
        .god_mode(god_mode)
    );
    
    konami konami(
        .up_btn(difficulty_btn), 
        .down_btn(down), 
        .left_btn(left), 
        .right_btn(reset_btn), 
        .mid_btn(start),
        .clk(fast),
        .god_mode(god_mode)
    );
    /*initial
    begin
    clk = 0;
    forever
    #10 clk = ~clk;
    end*/
    


endmodule
