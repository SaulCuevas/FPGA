////////////////////////////////////////////////////////////////////////////
module servoPWM(
		input CLK,
		input modo,
		input [4:0] pos_sel,
		output reg PWM,
		output reg [2:0] posi
    );

	reg [4:0] sampled_BOTONES;
	reg [4:0] BOTON_PRES;
	reg [21:0] sclk = 0;

//secuencia anti-rebotes para pos_sel
	always @ ( posedge CLK )
		begin
			sampled_BOTONES  <= pos_sel;
			// clock es dividido
			// se muestrea cada 25ms para verificar que la entrada es la misma que la
			// muestra, si la senal es estable, se saca la senal
			if(sclk == 22'd2_500_000) begin
				if( sampled_BOTONES == pos_sel ) BOTON_PRES = pos_sel;
				sclk <= 22'd0;
			end
			else sclk <= sclk + 1'b1;
		end

//asignacion pwm
	reg [20:0] CONT_FREC = 0;		//Contador de la frecuencia (50Hz)
	always @ ( posedge CLK )
		begin
			if( CONT_FREC == CONT_PWM) PWM = 1'b0;
			if( CONT_FREC == 21'd1_000_000 ) begin
					PWM = 1'b1;
					CONT_FREC = 0;
			end
			else begin
				CONT_FREC = CONT_FREC + 1'b1;
			end
		end

//ciclo de posiciones para modo B
	reg [2:0] CICLO = 0;
	reg [26:0] CONT_FREC_CICLO = 0;		//Contador de la frecuencia (1Hz)
	parameter CONT_CICLO = 27'd25_000_000;
	reg FREC = 0;
	always @ ( posedge CLK )
		begin
			if( CONT_FREC_CICLO == CONT_CICLO) FREC = 1'b0;
			if( CONT_FREC_CICLO == 27'd50_000_000 ) begin
					FREC = 1'b1;
					CONT_FREC_CICLO = 0;
			end
			else begin
				CONT_FREC_CICLO = CONT_FREC_CICLO + 1'b1;
			end
		end
		
	always @ ( posedge CLK )
		begin
			if ( modo == 1'b1 ) CICLO = CICLOB;
			else
				begin
					case ( BOTON_PRES )
					5'b00001 : CICLO = 3'd0;
					5'b00010 : CICLO = 3'd1;
					5'b00100 : CICLO = 3'd2;
					5'b01000 : CICLO = 3'd3;
					5'b10000 : CICLO = 3'd4;
					default : CICLO = CICLO;
					endcase
				end
		end
	
	reg [2:0] CICLOB = 0;
	always @ ( posedge FREC )
		begin
			CICLOB = CICLO + 1'b1;
			if(CICLOB == 3'd5) CICLOB = 3'd0;
		end

//2.000ms/20ns = 100_000 veces, para 180 grad
//1.625ms/20ns = 81_250 veces, para 135 grad
//1.250ms/20ns = 62_500 veces, para 90 grad
//0.875ms/20ns = 43_750 veces, para 45 grad
//0.500ms/20ns = 25_000 veces, para 0 grad
	reg [19:0] CONT_PWM = 0;
	
	always @ ( posedge CLK )
		begin
			case ( CICLO )
			3'd0 : CONT_PWM = 20'd25_000;
			3'd1: CONT_PWM = 20'd43_750;
			3'd2: CONT_PWM = 20'd62_500;
			3'd3: CONT_PWM = 20'd81_250;
			3'd4: CONT_PWM = 20'd100_000;
			default : CONT_PWM = CONT_PWM;
			endcase
		end
		
	always @ ( posedge CLK ) posi = CICLO;

endmodule
