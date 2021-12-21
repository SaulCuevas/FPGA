//////////////////////////////////////////////////////////////////////////////////
module Motor(
    input clk,
	 input [1:0] enable,
	 input direccion,
    input limSUP,
    input limINF,
    output reg [3:0] cont_pos = 0,
    output reg [3:0] pos = 0
    );

parameter p1 = 4'b1000,
			p2 = 4'b1100,
			p3 = 4'b0100,
			p4 = 4'b0110,
			p5 = 4'b0010,
			p6 = 4'b0011,
			p7 = 4'b0001,
			p8 = 4'b1001;

parameter pos1 = 3'd0,
			pos2 = 3'd1,
			pos3 = 3'd2,
			pos4 = 3'd3,
			pos5 = 3'd4,
			pos6 = 3'd5,
			pos7 = 3'd6,
			pos8 = 3'd7;
			
reg [2:0] presente = pos1, futuro = pos1;
reg [3:0] next_pos = p1;
reg paro = 0;

reg [15:0] cont_1ms = 0;
reg [1:0] cont_vueltas = 0;
reg finDeVueltas;
// MAQUINA DE ESTADOS
// 1ms/20ns = 50 000
always @ ( posedge clk )
begin
	// paro sincrono
	if( enable == 2'b01 ) paro <= 1'b0;
	else if( paro == 1'b1 ) begin futuro = futuro; next_pos = next_pos; end
	else begin
		if( cont_1ms == 16'd50_000 )
			begin
				cont_1ms <= 0;
				if( cont_vueltas == 2'b11 && finDeVueltas == 1'b1 )
					begin
						paro <= 1'b1;
						cont_vueltas <= 0;
						if( direccion == 1'b1 && limSUP == 1'b0 ) cont_pos <= cont_pos + 1'b1;
						else if( direccion == 1'b0 && limINF == 1'b0 ) cont_pos <= cont_pos - 1'b1;
					end
				case (presente)
					pos1:
						begin
							if( direccion == 1'b1 && limSUP == 1'b0 ) begin futuro = pos2; next_pos = p2; cont_vueltas <= cont_vueltas + 1'b1; finDeVueltas = 1'b0; end
							else if( direccion == 1'b0 && limINF == 1'b0 ) begin futuro = pos8; next_pos = p8; cont_vueltas <= cont_vueltas + 1'b1; finDeVueltas = 1'b0; end
							else paro <= 1'b1;
						end
					pos2:
						begin
							if( direccion == 1'b1 ) begin futuro = pos3; next_pos = p3; end
							else begin futuro = pos1; next_pos = p1; finDeVueltas = 1'b1; end
						end
					pos3:
						begin
							if( direccion == 1'b1 ) begin futuro = pos4; next_pos = p4; end
							else begin futuro = pos2; next_pos = p2; end
						end
					pos4:
						begin
							if( direccion == 1'b1 ) begin futuro = pos5; next_pos = p5; end
							else begin futuro = pos3; next_pos = p3; end
						end
					pos5:
						begin
							if( direccion == 1'b1 ) begin futuro = pos6; next_pos = p6; end
							else begin futuro = pos4; next_pos = p4; end
						end
					pos6:
						begin
							if( direccion == 1'b1 ) begin futuro = pos7; next_pos = p7; end
							else begin futuro = pos5; next_pos = p5; end
						end
					pos7:
						begin
							if( direccion == 1'b1 ) begin futuro = pos8; next_pos = p8; end
							else begin futuro = pos6; next_pos = p6; end
						end
					pos8:
						begin
							if( direccion == 1'b1 ) begin futuro = pos1; next_pos = p1; finDeVueltas = 1'b1; end
							else begin futuro = pos7; next_pos = p7; end
						end
				endcase
			end
		else cont_1ms <= cont_1ms + 1'b1;
	end
end

always @ (posedge clk) 
begin
	presente <= futuro;
	pos = next_pos;
end

endmodule
