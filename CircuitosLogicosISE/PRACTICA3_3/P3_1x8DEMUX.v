`timescale 1ns / 1ps
//	INSTITUTO POLITECNICO NACIONAL
//					UPIITA
// AUTORES: SAUL CUEVAS MORALES
//				ALEXIS GONZALEZ ZUNIGA
// DEMUX INPUT 1X8 OUTPUT TRI-ESTADO SALIDA A LEDS VERDES
module P3_1x8DEMUX(
	 input clk,
	 input clear,
	 input entrada,
    input [2:0] sel,
    input enable,
	 output reg [4:0] ledsbtR,
	 output reg [4:0] ledsbtG,
    output reg [7:0] salida,
    output reg [15:0] disp
    );

reg [18:0] contador;
wire [1:0] contador_disp;

always @(posedge clk)
begin 
	if(!clear) contador <= 0;
	else contador <= contador + 8'd1;
end 
assign contador_disp = contador[18:17]; //~~95.37Hz

always @(*)
begin
	salida = 8'b00000000; disp = {8'b11111111 , 8'b11111111};
	ledsbtR[2:0] =  sel[2:0]; 	ledsbtG[2:0] =  sel[2:0];
	ledsbtR[3] = !enable; ledsbtG[3] = !enable;
	ledsbtR[4] = entrada; ledsbtG[4] = entrada;
	if(contador_disp == 2'b00) begin
		if(enable == 1'b0) begin 
			salida = 8'bZZZZZZZZ; disp = {8'b11111111 , 8'b11111111};
		end
		else begin
			case(sel) 
			3'b000 : begin salida[0] = entrada; disp = {8'b01111111 , 8'b01111111}; end
			3'b001 : begin salida[1] = entrada; disp = {8'b10111111 , 8'b01111111}; end
			3'b010 : begin salida[2] = entrada; disp = {8'b11011111 , 8'b01111111}; end
			3'b011 : begin salida[3] = entrada; disp = {8'b11101111 , 8'b01111111}; end
			3'b100 : begin salida[4] = entrada; disp = {8'b11110111 , 8'b01111111}; end
			3'b101 : begin salida[5] = entrada; disp = {8'b11111011 , 8'b01111111}; end
			3'b110 : begin salida[6] = entrada; disp = {8'b11111101 , 8'b01111111}; end
			3'b111 : begin salida[7] = entrada; disp = {8'b11111110 , 8'b01111111}; end
			default : begin salida = 8'b00000000; disp = {8'b11111111 , 8'b11111111}; end
			endcase
		end
	end
	else begin salida = 8'b00000000; disp = {8'b11111111 , 8'b11111111}; end
end

endmodule 