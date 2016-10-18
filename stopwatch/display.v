`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:25:14 11/02/2015 
// Design Name: 
// Module Name:    display 
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
module display(
//Inputs
    digit0,
    digit1,
    digit2,
    digit3,
    clk,
	 blink,
	 adjust,
     select,

//Outputs
    AN,
    seg

    );
input [3:0] digit0;
input [3:0] digit1;
input [3:0] digit2;
input [3:0] digit3;
input clk;
input blink;
input adjust;
input select;

output reg [3:0] AN;
output reg [7:0] seg;

reg [3:0] temp_an;
integer count;
integer blinkcount;
//table
// 0 -> abcdef
// 1 -> bc
// 2 -> abdeg
// 3 -> abcdg
// 4 -> bcfg
// 5 -> acdfg
// 6 -> acdefg
// 7 -> abcf
// 8 -> abcdefg
// 9 -> abcdfg

initial
begin
    count = 0;
	 blinkcount = 0;
    AN = 4'b1111;
end

/*always @ (posedge blink)
begin
	if (adjust)
	begin
		blinkcount = blinkcount % 2;
		if (blinkcount == 0)
		begin
			temp_an = AN;
			AN = 0;
		end
		else
			AN = temp_an;
		blinkcount = blinkcount + 1;
	end
end*/

always @ (posedge clk)
begin

    
    count = count%4;
    
	 if (blink && adjust)
	 begin
			if (!select)
            begin
                case (count)
			  0 : begin
						 convert(digit0, seg);
						 AN = 4'b0111;
					end
			  1: begin
						 convert(digit1, seg);
						 AN = 4'b1011;
					end
			  2: begin
						 convert(digit2, seg);
						 AN = 4'b1111;
					end
			  3: begin
						 convert(digit3, seg);
						 AN = 4'b1111;
					end
		
                endcase
             end
             else 
             begin
                case (count)
			  0 : begin
						 convert(digit0, seg);
						 AN = 4'b1111;
					end
			  1: begin
						 convert(digit1, seg);
						 AN = 4'b1111;
					end
			  2: begin
						 convert(digit2, seg);
						 AN = 4'b1101;
					end
			  3: begin
						 convert(digit3, seg);
						 AN = 4'b1110;
					end
		
                endcase
             end
	 end
	 
	 else
	 begin
		 case (count)
			  0 : begin
						 convert(digit0, seg);
						 AN = 4'b0111;
					end
			  1: begin
						 convert(digit1, seg);
						 AN = 4'b1011;
					end
			  2: begin
						 convert(digit2, seg);
						 AN = 4'b1101;
					end
			  3: begin
						 convert(digit3, seg);
						 AN = 4'b1110;
					end
		
		 endcase
	end
	 
        
    count = count + 1;
end

task convert;
    input [3:0] digit;
    output [7:0] seg;
    reg [3:0] dig;
    begin
        dig = digit;
        if (dig == 0)
            seg = 8'b11000000;
        else if (dig == 1)
            seg = 8'b11111001;
        else if (dig == 2)
            seg = 8'b10100100;
        else if (dig == 3)
            seg = 8'b10110000;
        else if (dig == 4)
            seg = 8'b10011001;
        else if (dig == 5)
            seg = 8'b10010010;
        else if (dig == 6)
            seg = 8'b10000010;
        else if (dig == 7)
            seg = 8'b11011000;
        else if (dig == 8)
            seg = 8'b10000000;
        else if (dig == 9)
            seg = 8'b10010000;
    end
endtask

    


endmodule
