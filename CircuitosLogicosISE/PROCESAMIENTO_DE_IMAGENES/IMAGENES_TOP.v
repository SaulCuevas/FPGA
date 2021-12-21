////////////////////////////////////////////////////////
// 			INSTITUTO POLITECNICO NACIONAL				//
// 							UPIITA								//
// 			AUTORES: SAUL CUEVAS MORALES					//
// 						ALEXIS GONZALEZ ZUNIGA				//
// MODULO TOP-LEVEL PARA EL PROCESAMIENTO DE IMAGENES //
////////////////////////////////////////////////////////

module IMAGENES_TOP(
    input wire CLK,
	 input wire RESET,
	 input wire BRILLO_MAS,			// Botones para las operaciones
    input wire BRILLO_MEN,
    input wire UMBRAL_MAS,
    input wire UMBRAL_MEN,			
    input wire INVERTIR,			//
    output wire [15:0] DISPLAY,	// Display de 8 digitos de 7 segmentos
    output wire ctrl_done,	// LEDs
	 output wire Write_Done
	 );
	
	wire [2:0] OPERACION_SEL;
	wire VSYNC;
	
	wire VSYNC;
	wire HSYNC;
	wire DATA_R0;
	wire DATA_G0;
	wire DATA_B0;
	wire DATA_R1;
	wire DATA_G1;
	wire DATA_B1;
	
// U1: SELECCION DE OPERACIONES SEGUN EL BOTON PRESIONADO
SELECCION U1
(
 .CLK(CLK),
 .BRILLO_MAS(BRILLO_MAS),
 .BRILLO_MEN(BRILLO_MEN),
 .UMBRAL_MAS(UMBRAL_MAS),
 .UMBRAL_MEN(UMBRAL_MEN),
 .INVERTIR(INVERTIR),
 .BOTON_SEL(BOTON_SEL)
);

// U2: LECTURA Y PROCESAMIENTO DE LA IMAGEN
LECT_Y_PROCE U2
(
 .HCLK(CLK),
 .HRESETn(RESET),
 .VSYNC(VSYNC),
 .HSYNC(HSYNC),
 .DATA_R0(DATA_R0),
 .DATA_G0(DATA_G0),
 .DATA_B0(DATA_B0),
 .DATA_R1(DATA_R1),
 .DATA_G1(DATA_G1),
 .DATA_B1(DATA_B1),
 .ctrl_done(ctrl_done)
);

// U3: ESCRITURA DE LA IMAGEN PROCESADA
ESCRITURA U3
(
 .HCLK(CLK),
 .HRESETn(RESET),
 .VSYNC(VSYNC),
 .Hsync(HSYNC),
 .DATA_WRITE_R0(DATA_R0),
 .DATA_WRITE_G0(DATA_G0),
 .DATA_WRITE_B0(DATA_B0),
 .DATA_WRITE_R1(DATA_R1),
 .DATA_WRITE_G1(DATA_G1),
 .DATA_WRITE_B1(DATA_B1),
 .Write_Done(Write_Done)
);

// U4: MUESTRA OPERACION EN DISPLAYS
DISPLAYS U4
(
 .CLK(CLK),
 .BOTON_SEL(BOTON_SEL),
 .DISPLAY(DISPLAY)
);

endmodule
