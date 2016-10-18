`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:23:10 10/28/2015 
// Design Name: 
// Module Name:    second_counter1 
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
module second_counter1(
    
    out     ,
    counter2_enable,
    minute_enable,
    minute2_enable,
    enable  ,
	 select  ,
	 adjust  ,
    clk     ,
    reset
    
    );
    
    output reg [3:0] out;
    output reg counter2_enable;
    output reg minute_enable;
    output reg minute2_enable;
    input enable, select, adjust, clk, reset;
    
    reg [2:0] tens;
    reg [3:0] minute;
	 
	 integer minute_count;
    
    initial
    begin
        out = 0;
        counter2_enable = 0;
        minute_enable = 0;
        minute2_enable = 0;
        tens = 0;
        minute = 0;
		minute_count = 0;
    end
    
    always @ (posedge clk)
    begin
        if (reset)
		  begin
				out = 4'b0;
				counter2_enable = 0;
				minute_enable = 0;
				minute2_enable = 0;
				tens = 0;
				minute = 0;
                minute_count = 0;
		  end
		  if (!enable)
		  begin
				
				counter2_enable = 0;
				minute_enable = 0;
				minute2_enable = 0;
		  
		  end
		  
		  else if (adjust && enable)
		  begin
		  
				if (select)
				begin
				
					counter2_enable = 0;
                    minute_enable = 1;
					
					minute = minute + 1;

					//minute_count = minute_count + 1;
                    if (minute == 10)
                    begin
                        minute = 0;
                        minute2_enable = 1;
                    end
                                            
					/*if (minute_count == 10)
					begin
						minute2_enable = 1;
					end*/
					else
						minute2_enable = 0;
					
					//minute_count = minute_count%10;
					
				end
				else
				begin
				
					minute_enable = 0;
					minute2_enable = 0;
					
					out = out + 1;
					if (out == 9)
					begin
                         if (tens == 5)
                            tens = 0;
                         tens = tens + 1;
						 counter2_enable = 1;
						 
					end
					else
						counter2_enable = 0;
					out = out%10;
				
				end
		  
		  end
		  
        else if (enable)
        begin
		  
				counter2_enable = 0;
				minute_enable = 0;
				minute2_enable = 0;
				
            out = out + 1;
            if (out == 9)
            begin
                counter2_enable = 1;
                
                if ( tens == 5 )
                begin
                    minute_enable = 1;
                    tens = 0;
                    
                    if ( minute == 9 )
                    begin
                        minute2_enable = 1;
                        minute = 0;
                    end
                    else
                        minute = minute + 1;
                end
                else
                    tens = tens + 1;
            end
            
            else
            begin
                counter2_enable = 0;
                minute_enable = 0;
                minute2_enable = 0;
            end
            out = out % 10;
        end
    end


endmodule
