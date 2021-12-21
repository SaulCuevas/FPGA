`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:10:45 12/19/2020 
// Design Name: 
// Module Name:    LecturaSD 
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
module LecturaSD(
	input clk, 		// Reloj de 50MHz
	
	inout sck, 	// Senal de reloj de la tarjeta SD de 25MHz.
	output reg cs, // Senal de control de acceso (Chip Select). 0 = SPI Activado | 1= SPI Desactivado
	output 	sdo, 	// Senal que contiene los datos mandados afuera del dispositivo.
	input 	sdi, 	// Senal que contiene los datos mandados al dispositivo.
    );

reg [8:0] cont;				// Contador de 0 a 511
reg [7:0] data [511:0]; 	// Salida de datos. 512 bytes
integer conta = 0;

reg SSPOV; 			//Overflow.
reg SSPEN; 			//Enable.
reg CKP;				//Polaridad de reloj.
reg [3:0] SSPM; 	//Bits de control.
	
always@(posedge CLK)
	begin
		if (conta == 1) 
			begin
				sck = ~sck; //50MHz/2 = 25MHz
				conta = 1;
			end
		else conta = conta + 1;
	end

always@(posedge sck)
	begin:Control
		cs = 0; //Se habilita el Chip Select para que empiece la transferencia
	end

always@(posedge sck)
	begin:Shift_Register
	end
	
always@(posedge sck)
	begin:Serial_Buffer
		if(cs == 0)
	end

	
endmodule
