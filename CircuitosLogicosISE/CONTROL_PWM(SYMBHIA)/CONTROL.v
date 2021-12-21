//////////////////////////////////////////////////////////////////////////////////
module CONTROL(
    input CLK,
    //input [7:0] ENCODER,
	 input [1:0] ENCODER,
    input BOTON_MR,
	 input BOTON_MDC,
	 input BOTON_LED,
	 output reg [14:0] PWM,
	 output reg [1:0] BOTON_SEL
    );
	 
	reg sampled_BOTON_MR;
	reg sampled_BOTON_MDC;
	reg sampled_BOTON_LED;
	reg BOTON_PRES_MR;
	reg BOTON_PRES_MDC;
	reg BOTON_PRES_LED;
	reg [21:0] sclk = 0;
	
	always @ ( posedge CLK )
		begin
			sampled_BOTON_MR  <= BOTON_MR;
			sampled_BOTON_MDC <= BOTON_MDC;
			sampled_BOTON_LED <= BOTON_LED;
			// clock es dividido
			// se muestrea cada 25ms para verificar que la entrada es la misma que la
			// muestra, si la senal es estable, se saca la senal
			if(sclk == 22'd2_500_000) begin
				if( sampled_BOTON_MR == BOTON_MR ) BOTON_PRES_MR = BOTON_MR;
				if( sampled_BOTON_MDC == BOTON_MDC ) BOTON_PRES_MDC = BOTON_MDC;
				if( sampled_BOTON_LED == BOTON_LED ) BOTON_PRES_LED = BOTON_LED;
				sclk <= 22'd0;
			end
			else sclk <= sclk + 1'b1;
		end
	
	always @ ( posedge CLK ) 
		begin
			if( BOTON_PRES_MR == 1'b1 ) BOTON_SEL = 2'b01;
			else if( BOTON_PRES_MDC == 1'b1 ) BOTON_SEL = 2'b11;
			else if( BOTON_PRES_LED == 1'b1 ) BOTON_SEL = 2'b10;
			else BOTON_SEL = 2'b00;
		end
	
	//always @ ( posedge CLK ) PWM = { 1'b0, ENCODER, 6'd1 };
	
	reg [18:0] rebote = 0;			//Registro que servir de delay para evitar el rebote del encoder
	reg [3:0] Datos = 0;				//Registro que almacena datos para saber si se giro a la derecha o a la izquierda
	reg [25:0] Counter = 0;			//Registro que serivr como contador
	
	always@(posedge CLK)
	begin
		// ________________________________________________________________________________
		// Deteccion del sentido de giro del encoder y aumentar o disminuir el PWM
		if(rebote == 19'd320_000) // Cuando se cumplen los 320us, se va a analizar si se mueve en sentido
											//de las manecillas del reloj o en contra, el encoder tiene rebote, por
											//lo que, si no estuviera este timer, podras aumentar o disminuir
											//la frecuencia varias veces, aunque solo se haya girado una vez.
		begin
			case(ENCODER)
				2'b00: Datos = 4'b1000;
				2'b01: Datos[2] = 1'b1;
				2'b11: Datos = 4'b0010;
				2'b10: Datos[0] = 1'b1;
				default: Datos = 4'b0000;
			endcase
			if(Datos == 4'b1001 || Datos == 4'b0110) // Indica el sentido horario.
			begin
				if(PWM == 15'd25_000) // Si el PWM actual es igual a 25_000
				begin
					PWM = PWM; 		// Se mantiene igual; no aumenta
					Counter = 0;	// El contador para la frecuencia variable se hace 0
										//para evitar que al cambiar la frecuencia el counter no supere el limite
										//para mantener al frecuencia y por lo tanto se quede encendido o apagado ms tiempo
				end
				else
				begin
					PWM = PWM + 15'd100; // Se le suman 100 Hz
					Counter = 0;
				end
				Datos = 4'b0000;	//Datos se hace 0 para evitar errores como mantenerese subiendo la //frecuencia.
			end	
			if(Datos == 4'b1100 || Datos == 4'b0011) // Indica el sentido antihorario.
			begin
				if(PWM == 15'd100) // Si el PWM actual es igual a 100
				begin
					PWM = PWM; 		// Se mantiene igual; no disminuye
					Counter = 0;	
				end
				else
				begin
					PWM = PWM - 15'd100; // Se le restan 100 Hz
					Counter = 0;
				end
				Datos = 4'b0000;	//Datos se hace 0 para evitar errores como mantenerese subiendo la //frecuencia.
			end	
		rebote = 0;		//se reinicia el timer para los 320us y evitar el rebote
		end
		else	rebote = rebote + 1'b1;
	end

endmodule
