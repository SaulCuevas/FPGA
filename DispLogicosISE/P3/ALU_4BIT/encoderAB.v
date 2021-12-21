//////////////////////////////////////////////////////////////////////////////////
module encoderAB(
    input CLK,
    input CAMBIO,
	 input [2:0] SEL,
    input [1:0] ENCODER,
    output reg [3:0] A,
    output reg [3:0] B,
	 output reg [7:0] LEDSW_R = 0,
    output reg [7:0] LEDSW_G = 0,
    output reg [7:0] LEDSW_B = 0
    );
/*
///////////////////////////////////////////////////////////////////////////////
// Secuencia anti-rebotes
reg sampled_CAMBIO;
reg BOTON_PRES_CAMBIO;
reg AB = 0;
reg [21:0] sclk = 0;

always @ ( posedge CLK )
	begin
		sampled_CAMBIO <= CAMBIO;
		// clock es dividido
		// se muestrea cada 25ms para verificar que la entrada es la misma que la
		// muestra, si la senal es estable, se saca la senal
		if(sclk == 22'd2_500_000) begin
			if(sampled_CAMBIO == CAMBIO) BOTON_PRES_CAMBIO <= CAMBIO;
			sclk <= 22'd0;
		end
		else sclk <= sclk + 1'b1;
	end
	
always @ ( negedge BOTON_PRES_CAMBIO ) AB = ~AB;*/

// ________________________________________________________________________________
// Deteccion del sentido del encoder
reg [3:0] datos = 0;  // Este se usa para saber la posicion anterior y la actual
reg [20:0] timer = 0; // timer de 20ms para evitar el rebote del encoder

always@(posedge CLK)
	begin
		if(timer == 21'd1_000_000) begin // Cuando se cumplen los 20ms, se va a analizar si se mueve en sentido
													// de las manecillas del reloj o en contra, el encoder tiene rebote
			case(ENCODER)
				2'b00: datos = 4'b1000;
				2'b01: datos[2] = 1'b1;
				2'b11: datos = 4'b0010;
				2'b10: datos[0] = 1'b1;
				default: datos = 4'b0000;
			endcase
			if(datos == 4'b1001 || datos == 4'b0110) // Indica el sentido horario.
				begin  
					A = A + (1'b1 & ~CAMBIO); 
					B = B + (1'b1 & CAMBIO);
				end
			else if(datos == 4'b1100 || datos == 4'b0011) // Indica el sentido anti-horario.
				begin
					A = A - (1'b1 & ~CAMBIO);
					B = B - (1'b1 & CAMBIO);
				end
			else begin A = A; B = B; end
			timer = 0; //se reinicia el timer para los 20ms y evitar el rebote
		end
		else timer = timer + 1'b1;
	end

always @ ( posedge CLK )
	begin
		if( CAMBIO == 1'b1 ) begin LEDSW_R[7] = 1'b1; LEDSW_G[7] = 1'b0; LEDSW_B[7] = 1'b0; end
		else begin LEDSW_R[7] = 1'b0; LEDSW_G[7] = 1'b1; LEDSW_B[7] = 1'b0; end
	end

always @ ( posedge CLK )
	begin
		if( SEL[2] == 1'b0 ) begin LEDSW_R[2:0] = SEL; LEDSW_G[2:0] = 3'd0; LEDSW_B[2:0] = 3'd0; end
		else begin LEDSW_R[2:0] = 3'd0; LEDSW_G[2:0] = 3'd0; LEDSW_B[2:0] = SEL; end
	end

endmodule
