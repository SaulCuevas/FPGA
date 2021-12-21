//////////////////////////////////////////////////////////////////////////////////
module MOTOR_UNI(
		input clk,
		input vel_asc,
		input vel_des,
		input direccion,
		input paro,
		output reg [3:0] pos,
		output [15:0] display,
		output reg [3:0] ledsR,
		output reg [3:0] ledsG
    );
wire frec; //salida de reloj variable

parameter p1 = 4'b1000,
			p2 = 4'b1100,
			p3 = 4'b0100,
			p4 = 4'b0110,
			p5 = 4'b0010,
			p6 = 4'b0011,
			p7 = 4'b0001,
			p8 = 4'b1001;

parameter pos1 = 3'b000,
			pos2 = 3'b001,
			pos3 = 3'b010,
			pos4 = 3'b011,
			pos5 = 3'b100,
			pos6 = 3'b101,
			pos7 = 3'b110,
			pos8 = 3'b111;
reg [3:0] presente = pos1, futuro = pos1, pasado = pos1;
reg [3:0] next_pos = p1;

always @ ( posedge frec )
begin
	// paro sncrono
	if (paro==1) begin futuro = futuro; next_pos = next_pos; end
	else
		case (presente)
			pos1:
				begin 
					pasado = pos1;
					if( direccion == 1'b1 ) begin futuro = pos2; next_pos = p2; end
					else begin futuro = pos8; next_pos = p8; end
				end
			pos2:
				begin 
					pasado = pos2;
					if( direccion == 1'b1 ) begin futuro = pos3; next_pos = p3; end
					else begin futuro = pos1; next_pos = p1; end
				end
			pos3:
				begin 
					pasado = pos3;
					if( direccion == 1'b1 ) begin futuro = pos4; next_pos = p4; end
					else begin futuro = pos2; next_pos = p2; end
				end
			pos4:
				begin 
					pasado = pos4;
					if( direccion == 1'b1 ) begin futuro = pos5; next_pos = p5; end
					else begin futuro = pos3; next_pos = p3; end
				end
			pos5:
				begin 
					pasado = pos5;
					if( direccion == 1'b1 ) begin futuro = pos6; next_pos = p6; end
					else begin futuro = pos4; next_pos = p4; end
				end
			pos6:
				begin 
					pasado = pos6;
					if( direccion == 1'b1 ) begin futuro = pos7; next_pos = p7; end
					else begin futuro = pos5; next_pos = p5; end
				end
			pos7:
				begin 
					pasado = pos7;
					if( direccion == 1'b1 ) begin futuro = pos8; next_pos = p8; end
					else begin futuro = pos6; next_pos = p6; end
				end
			pos8:
				begin 
					pasado = pos8;
					if( direccion == 1'b1 ) begin futuro = pos1; next_pos = p1; end
					else begin futuro = pos7; next_pos = p7; end
				end
		endcase
end

always @ (posedge clk) 
begin
	presente <= futuro;
	pos = next_pos;
	if( direccion == 1'b1 ) begin ledsR = pos; ledsG = 4'b0000; end
	else begin ledsR = 4'b0000; ledsG = pos; end
end

//Reloj variable dependiente de si se presiona vel_1 o vel_2
RELOJ U1(
	.CLK(clk),
	.BOTON_ASC(vel_asc),
	.BOTON_DES(vel_des),
	.DISPLAY(display),
	.SALIDA(frec)
	);

endmodule
