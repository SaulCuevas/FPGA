////////////////////////////////////////////////////////////////////////////
module SERVO2(
		input CLK,
		input cont_aplausos,
		input [1:0] lado,
		output reg PWM
    );

//asignacion pwm
	reg [20:0] CONT_FREC = 0;		//Contador de la frecuencia (50Hz)
	always @ ( posedge CLK )
		begin
			if( CONT_FREC == CONT_PWM) PWM = 1'b0;
			if( CONT_FREC == 21'd999_999) begin
					PWM = 1'b1;
					CONT_FREC = 0;
			end
			else begin
				CONT_FREC = CONT_FREC + 1'b1;
			end
		end

//2.000ms/20ns = 125_000 veces, para 180 grad
//1.625ms/20ns = 100_000 veces, para 135 grad
//1.250ms/20ns = 75_000 veces, para 90 grad
//0.875ms/20ns = 50_000 veces, para 45 grad
//0.500ms/20ns = 25_000 veces, para 0 grad
	reg [19:0] CONT_PWM = 0;
	
	always @ ( posedge CLK )
		begin
			if( cont_aplausos )
				begin
					case ( lado )
					2'd0 : CONT_PWM = 20'd25_000;
					2'd1: CONT_PWM = 20'd30_000;
					2'd2: CONT_PWM = 20'd30_000;
					2'd3: CONT_PWM = 20'd25_000;
					default : CONT_PWM = CONT_PWM;
					endcase
				end
			else CONT_PWM = 20'd25_000;
		end

endmodule
