//////////////////////////////////////////////////////////////////////////////////
module MOTORES(
    input CLK,
	 input FREC,
	 input [1:0] BOTON_SEL,
	 output reg MOTORREDUCTOR,
	 output reg MOTOR_DC,
	 output reg LED
    );

	always @ ( posedge CLK )
		begin
			case( BOTON_SEL )
				2'b01		:	MOTORREDUCTOR = FREC;
				2'b11		:	MOTOR_DC = FREC;
				2'b10		:	LED = FREC;
				default	:	begin MOTORREDUCTOR = 1'b0; MOTOR_DC = 1'b0; LED = 1'b0; end
			endcase
		end

endmodule
