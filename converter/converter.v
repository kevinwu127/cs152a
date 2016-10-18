`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:33:37 10/19/2015 
// Design Name: 
// Module Name:    converter 
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
module FPCVT(
    //inputs
    
    D,
    //outputs
    S, E, F

);

    input [11:0] D;
    output reg S;
    output reg [2:0] E;
    output reg [3:0] F;
    
    reg [11:0] d;
    integer i;
    integer k;
    integer numZeroes;
    integer j;
    
    always @(D) begin
    
        numZeroes = 0;
        d = D;
        S = D[11];
        
        if (S)
        begin
            if (d == 12'b100000000000)
            begin
                d = ~d;
            end
            else
                d = ~d + 1;
        end
        
        for(i = 11; d[i] != 1; i = i - 1)
        begin
            numZeroes = numZeroes + 1;
        end
        
        if ( numZeroes >= 8)
            E = 0;
        else
            E = 8 - numZeroes;
            
        if (numZeroes >= 8)
        begin
            F = d[3:0];
        end
        else
            begin
                k = 3;
                j = numZeroes;
                for ( i = 11-j; i >= 8-j ; i = i - 1)
                    begin
                        F[k] = d[i];
                        k = k - 1;
                    end
                if (d[i])
                begin
                    if (F == 15 && E < 7)
                    begin
                        F = F >> 1;
                        E = E + 1;
                    end
                    if (F < 15)
                        F = F + 1;
                end
            end
    end
    
   /* 
    reg [11:0] d;
    integer test;
    integer i;
    integer k;
    integer numZeroes;
    integer j;
     
    
    numZeroes = 0;
    sign = data[11];
    if (sign)
    begin
        d = ~d + 1;
    end
    for(i = 11; data[i] != 1;i = i - 1)
    begin
        numZeroes = numZeroes + 1;
    end
    
    if ( numZeroes >= 8)
        exp <= 0;
    else
        exp <= 8 - numZeroes;
    
    if (numZeroes >= 8)
        begin
            mantissa <= data[3:0];
        end
    else
        begin
            k = 3;
            j = numZeroes;
            for ( i = 11-j; i >= 8-j ; i = i - 1)
                begin
                    mantissa[k] <= data[i];
                    k = k - 1;
                end
            if (data[i])
            begin
                if (mantissa == 15 && exp < 7)
                begin
                    mantissa <= mantissa >> 1;
                    exp <= exp + 1;
                end
                if (mantissa < 15)
                    mantissa <= mantissa + 1;
            end
        end
      */  
endmodule
