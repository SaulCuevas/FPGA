////////////////////////////////////////////////////////
// 			INSTITUTO POLITECNICO NACIONAL				//
// 							UPIITA								//
// 			AUTORES: SAUL CUEVAS MORALES					//
// 						ALEXIS GONZALEZ ZUNIGA				//
// 																	//
////////////////////////////////////////////////////////
module SELECCION(
    input CLK,
    input BRILLO_MAS,
    input BRILLO_MEN,
    input UMBRAL_MAS,
    input UMBRAL_MEN,
    input INVERTIR,
    output reg [2:0] BOTON_SEL
    );
	
	reg sampled_BRILLO_MAS;
	reg sampled_BRILLO_MEN;
	reg sampled_UMBRAL_MAS;
	reg sampled_UMBRAL_MEN;
	reg sampled_INVERTIR;
	
	reg PRES_BRILLO_MAS;
	reg PRES_BRILLO_MEN;
	reg PRES_UMBRAL_MAS;
	reg PRES_UMBRAL_MEN;
	reg PRES_INVERTIR;
	reg [21:0] sclk = 0;
	
	always @ ( posedge CLK )
		begin
			sampled_BRILLO_MAS <= BRILLO_MAS;
			sampled_BRILLO_MEN <= BRILLO_MEN;
			sampled_UMBRAL_MAS <= UMBRAL_MAS;
			sampled_UMBRAL_MEN <= UMBRAL_MEN;
			sampled_INVERTIR <= INVERTIR;
			// clock es dividido
			// se muestrea cada 25ms para verificar que la entrada es la misma que la
			// muestra, si la senal es estable, se saca la senal
			if(sclk == 22'd2_500_000) begin
				if( sampled_BRILLO_MAS == BRILLO_MAS ) PRES_BRILLO_MAS = BRILLO_MAS;
				if( sampled_BRILLO_MEN == BRILLO_MEN ) PRES_BRILLO_MEN = BRILLO_MEN;
				if( sampled_UMBRAL_MAS == UMBRAL_MAS ) PRES_UMBRAL_MAS = UMBRAL_MAS;
				if( sampled_UMBRAL_MEN == UMBRAL_MEN ) PRES_UMBRAL_MEN = UMBRAL_MEN;
				if( sampled_INVERTIR == INVERTIR ) PRES_INVERTIR = INVERTIR;
				sclk <= 22'd0;
			end
			else sclk <= sclk + 1'b1;
		end
	
	always @ ( posedge CLK )
		begin
			if( PRES_BRILLO_MAS == 1'b1 ) BOTON_SEL = 3'b001;
			else if( PRES_BRILLO_MEN == 1'b1 ) BOTON_SEL = 3'b010;
			else if( PRES_UMBRAL_MAS == 1'b1 ) BOTON_SEL = 3'b011;
			else if( PRES_UMBRAL_MEN == 1'b1 ) BOTON_SEL = 3'b100;
			else if( PRES_INVERTIR == 1'b1 ) BOTON_SEL = 3'b101;
			else BOTON_SEL = 3'b000;
		end

endmodule
