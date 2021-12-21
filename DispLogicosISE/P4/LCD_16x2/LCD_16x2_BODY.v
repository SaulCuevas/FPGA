//////////////////////////////////////////////////////////////////////////////////
// ELABORADO POR: SAUL ASIS CUEVAS MORALES
// MODULO PARA MANDAR UN COMANDO A UN DISPLAY LCD 16X2 POR MEDIO DE 8 BITS DE DATOS
//////////////////////////////////////////////////////////////////////////////////
module LCD_16x2_BODY(
    input clk,
    output RS,
    output RW,
    output E,
    output [7:0] DATA
    );

reg [10:0] CADENA = 0;
reg start = 0;
wire ready;
// MANDA EL COMANDO
LCD_16x2_CMD CMD
(
 .clk(clk),
 .CADENA(CADENA),
 .RS(RS),
 .RW(RW),
 .E(E),
 .DATA(DATA),
 .ready(ready)
); 

// delays para cada CMD
parameter CLR_DISP_delay = 76_500, //1.53ms
			RET_HOME_delay = 76_500,
			ENTRY_MODE_delay = 1_950, //39us
			DISPLAY_CONTROL_delay = 1_950, //39us
			CURSOR_SHIFT_delay = 1_950,
			FUNCTION_SET_delay = 1_950,
			CGRAM_ADDR_delay = 1_950,
			DDRAM_ADDR_delay = 1_950,
			DATA_ADDR_delay = 2_150, //43us
			READ_RAM_delay = 2_150;

reg opSTART = 0;
reg opLOOP = 0;
parameter 

always @ ( posedge clk )
	begin
		case( OPERACION )
	// START
			5'd0:  
				begin
					start <= 1'b1;
				end
	// LOOP
		endcase
	end

endmodule
