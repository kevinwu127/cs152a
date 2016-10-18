`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:29:09 11/16/2015 
// Design Name: 
// Module Name:    clock 
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
module clock(

    // Inputs
    clk     ,
    difficulty  ,
    
    // Outputs
    mole_clk,
    fast,
    blink,
    sound
    
    );
    
    input clk;
    input difficulty;
    
    output reg mole_clk;
    output reg fast;
    output reg blink;
    output reg sound;
    
    integer count1;
	integer count2;
	integer count3;
	integer count4;
    integer count5;
    
    initial
    begin
        mole_clk <= 0;
        fast <= 0;
        blink <= 0;
        count1 <= 0;
		count2 <= 0;
		count3 <= 0;
		count4 <= 0;
    end
    
    always @ (posedge clk)
    begin
		if (difficulty)
		begin
			  if (count1 >= 37_500_000)
			  begin
					mole_clk <= ~mole_clk;
					count1 <= 0;
			  end
			  else
					count1 <= count1 + 1;
		end
					
		else 
		begin
			if (count1 >= 50_000_000)
			begin
					mole_clk <= ~mole_clk;
					count1 <= 0;
			end
			else
					count1 <= count1 + 1;
		end
			
		 
    end
	 
	 always @ (posedge clk)
	 begin
        
        if (count3 >= 31250)
        begin
            fast <= ~fast;
				count3 <= 0;
        end
		else
				count3 <= count3 + 1;
    end
	 
	 always @ (posedge clk)
	 begin
        
        if (count4 >= 20000000)
        begin
            blink <= ~blink;
				count4 <= 0;
        end
		else
				count4 <= count4 + 1;
        
    end
	 
	 always @ (posedge clk)
	 begin
        
        if (count5 >= 20000)
        begin
            sound <= ~sound;
				count5 <= 0;
        end
		else
				count5 <= count5 + 1;
        
    end


endmodule
