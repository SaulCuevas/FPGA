//////////////////////////////////////////////////////////////////////////////////
module MOTOR_BI(
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

parameter p1 = 4'b0110,
			p2 = 4'b0101,
			p3 = 4'b1001,
			p4 = 4'b1010;

parameter pos1 = 2'b00,
			pos2 = 2'b01,
			pos3 = 2'b10,
			pos4 = 2'b11;
			
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
					else begin futuro = pos4; next_pos = p4; end
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
					if( direccion == 1'b1 ) begin futuro = pos1; next_pos = p1; end
					else begin futuro = pos3; next_pos = p3; end
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
