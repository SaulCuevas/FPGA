module Compuertas(
input wire a,b,c,
output wire [0:5] s );
assign s[0]= a ^ b ^ b;
assign s[1] = a | b | c;
assign s[2] = ~(a ^ b ^ c);
assign s[3] = a & b & c;
assign s[4] = ~(a & b & c);
assign s[5] = ~(a | b | c);
endmodule

