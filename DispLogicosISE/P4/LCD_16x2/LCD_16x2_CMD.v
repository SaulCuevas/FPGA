//////////////////////////////////////////////////////////////////////////////////
// ELABORADO POR: SAUL ASIS CUEVAS MORALES
// MODULO PARA MANDAR UN COMANDO A UN DISPLAY LCD 16X2 POR MEDIO DE 8 BITS DE DATOS
//////////////////////////////////////////////////////////////////////////////////
module LCD_16x2_CMD(
    input clk,
	 input [10:0] CADENA,
	 input start,
    output reg RS,
    output reg RW,
    output reg E,
    output reg [7:0] DATA,
	 output reg ready
    );
	 
reg [3:0] delay = 0;
reg [2:0] presente = 0;
parameter EDO0 = 3'b000;
			EDO1 = 3'b001;
			EDO2 = 3'b010;
			EDO3 = 3'b011;
			EDO4 = 3'b100;

always @ ( posedge clk )
	begin
		case( presente )
			EDO0:
				begin
					if( start ) 
						begin
							presente <= EDO1;
							ready <= 1'b0;
						end
					else presente <= EDO0;
				end
			EDO1:
				begin
					E <= 1'b0;
					RS <= CADENA[10];
					RW <= CADENA[9];
					DATA <= CADENA[7:0]
					if( delay == 4'd4 ) // delay de 100ns
						begin
							delay <= 4'd0;
							presente <= EDO2;
						end
					else delay <= delay + 1'b1;
				end
			EDO2:
				begin
					E <= 1'b1;
					if( delay == 4'd14 ) // delay de 300ns
						begin
							delay <= 4'd0;
							presente <= EDO3;
						end
					else delay <= delay + 1'b1;
				end
			EDO3:
				begin
					E <= 1'b0;
					if( delay == 4'd9 ) // delay de 200ns
						begin
							delay <= 4'd0;
							presente <= EDO4;
						end
					else delay <= delay + 1'b1;
				end
			EDO4:
				begin
					E <= 1'b1;
					ready <= 1'b1;
					estado <= EDO0;
				end
		endcase
	end

endmodule
