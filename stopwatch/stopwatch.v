`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:51:26 10/28/2015 
// Design Name: 
// Module Name:    stopwatch 
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
module stopwatch(
    pause, adjust, select, clk, reset,
    
    seg, an
);

    // Inputs
	input pause;
    input adjust;
	input select;
	input clk;
	input reset;

	// Outputs
	wire [3:0] out1;
    wire [2:0] out2;
    wire [3:0] out3;
    wire [2:0] out4;
    output [7:0] seg;
    output [3:0] an;
	 
    reg enable = 1;
	 wire en;
    wire minute_enable;
    wire counter2_enable;
    wire minute_counter2_enable;
    
    wire one_hertz;
    wire two_hertz;
    wire fast;
    wire blink;
	
	
	/*always @ (posedge pause)
	begin
		enable <= ~enable;
		assign en = enable;
	end*/
	// Instantiate modules
	second_counter1 sc1 (
		.out(out1), 
        .counter2_enable(counter2_enable),
        .minute_enable(minute_enable),
        .minute2_enable(minute_counter2_enable),
		.enable(pause), 
		.select(select),
		.adjust(adjust),
		.clk(one_hertz), 
		.reset(reset)
	);
    
    second_counter2 sc2 (
        .out(out2),
        .enable(counter2_enable),
        .clk(one_hertz),      
        .reset(reset)
    );
    
    minute_counter1 mc1 (
		.out(out3), 
		.enable(minute_enable), 
		.clk(one_hertz), 
		.reset(reset)
	);
    
    minute_counter2 mc2 (
        .out(out4),
        .enable(minute_counter2_enable),
        .clk(one_hertz),
        .reset(reset)
    );
    
    clock clock (
        .clk(clk),
        .adjust(adjust),
        .one_hertz(one_hertz),
		  .two_hertz(two_hertz),
        .fast(fast),
        .blink(blink)
    );
    
    display display (
        .digit0(out4),
        .digit1(out3),
        .digit2(out2),
        .digit3(out1),
        .clk(fast),
		  .adjust(adjust),
		  .blink(blink),
          .select(select),
        .AN(an),
        .seg(seg)
    );
    
  
    



endmodule
