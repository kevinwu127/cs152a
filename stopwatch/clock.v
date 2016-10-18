`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:39:57 11/02/2015 
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
    adjust  ,
    
    // Outputs
    one_hertz,
	 two_hertz,
    fast,
    blink
    
    );
    
    input clk;
    input adjust;
    
    output reg one_hertz;
	 output reg two_hertz;
    output reg fast;
    output reg blink;
    
    integer count1;
	 integer count2;
	 integer count3;
	 integer count4;
    
    initial
    begin
        one_hertz <= 0;
		  two_hertz <= 0;
        fast <= 0;
        blink <= 0;
        count1 <= 0;
		  count2 <= 0;
		  count3 <= 0;
		  count4 <= 0;
    end
    
    always @ (posedge clk)
    begin
		if (adjust)
		begin
			  if (count1 >= 25_000_000)
			  begin
					one_hertz <= ~one_hertz;
					count1 <= 0;
			  end
			  else
					count1 <= count1 + 1;
		end
					
		else 
		begin
			if (count1 >= 50_000_000)
			  begin
					one_hertz <= ~one_hertz;
					count1 <= 0;
			  end
			  else
					count1 <= count1 + 1;
		end
			
		 
    end
	 
	 always @ (posedge clk)
	 begin
    
			  if (count2 == 25_000_000)
			  begin
					two_hertz <= ~two_hertz;
					count2 <= 0;
			  end
			  else
					count2 <= count1 + 1;
			
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
        
        /*if (adjust)
            one_hertz = two_hertz;*/
        
    end
	 
	 


endmodule
