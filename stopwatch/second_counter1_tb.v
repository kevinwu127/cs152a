`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:32:34 10/28/2015
// Design Name:   second_counter1
// Module Name:   C:/Users/152/Desktop/kevin-shuowang/stopwatch/second_counter1_tb.v
// Project Name:  stopwatch
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: second_counter1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module second_counter1_tb;

	// Inputs
	reg enable;
	reg clk;
	reg reset;

	// Outputs
	wire [3:0] out;

	// Instantiate the Unit Under Test (UUT)
	second_counter1 uut (
		.out(out), 
		.enable(enable), 
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		enable = 1;
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
        
        
		// Add stimulus here

	end
    
    always #5 clk = ~clk;
      
endmodule

