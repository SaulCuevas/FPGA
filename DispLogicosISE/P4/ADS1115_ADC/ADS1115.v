//////////////////////////////////////////////////////////////////////////////////
module ADS1115(
    input clk,
	 input switch,
    output SCL,
    inout SDA,
    output [15:0] DISPLAY,
	 output ledR,
	 output ledG
    );

assign ledR = ~switch;
assign ledG = switch;

// BYTE 1: 8'h01 -- Config register
// BYTE 2: 8'b        1     1      0      0      0      1      0      0	 
//                  | OS | MUX2 | MUX1 | MUX0 | PGA2 | PGA1 | PGA0 | MODE
// BYTE 3: 8'b        1      0     0        0           0          0          1           1	 
//                  | DR2 | DR1 | DR0 | COMP_MODE | COMP_POL | COMP_LAT | COMP_QUE1 | COMP_QUE0
/*
	OS
	For a write status:
	0 : No effect
	1 : Begin a single conversion (when in power-down mode)
	For a read status:
	0 : Device is currently performing a conversion
	1 : Device is not currently performing a conversion
	
	MUX
	000 : AINP = AIN0 and AINN = AIN1 (default)		100 : AINP = AIN0 and AINN = GND
	001 : AINP = AIN0 and AINN = AIN3 					101 : AINP = AIN1 and AINN = GND
	010 : AINP = AIN1 and AINN = AIN3 					110 : AINP = AIN2 and AINN = GND
	011 : AINP = AIN2 and AINN = AIN3 					111 : AINP = AIN3 and AINN = GND
	
	PGA
	000 : FS = ±6.144V				100 : FS = ±0.512V
	001 : FS = ±4.096V				101 : FS = ±0.256V
	010 : FS = ±2.048V (default)	110 : FS = ±0.256V
	011 : FS = ±1.024V 				111 : FS = ±0.256V
	
	MODE
	0 : Continuos conversion
	1 : Power-down single-shot mode
	
	DR 
	000 : 8SPS		100 : 128SPS (default)
	001 : 16SPS		101 : 250SPS
	010 : 32SPS		110 : 475SPS
	011 : 64SPS		111 : 860SPS
	
	COMP_MODE
	0 : Traditional comparator with hysteresis (default)
	1 : Window comparator
	
	COMP_POL
	0 : Active low (default)
	1 : Active high
	
	COMP_LAT
	0 : Non-latching comparator (default)
	1 : Latching comparator
	
	COMP_QUE
	00 : Assert after one conversion
	01 : Assert after two conversions
	10 : Assert after four conversions
	11 : Disable comparator (default)
*/ 

//parameter CONFIG_MSB = 8'b11000100;
parameter CONFIG_LSB = 8'b10000011;

// Asignacion de lectura por medio del switch
wire [7:0] CONFIG_MSB = switch ? 8'b11000100 : 8'b11010100;

// Generacion de reloj de 100kHz y cambio
reg frec_100kHz = 0;
reg cambio = 0;
reg [5:0] cont_gen_frec = 0;
reg [2:0] cont_frec_100kHz = 0;
always @ ( posedge clk )
	begin
		if( cont_gen_frec == 6'd49 ) // Se cumple 1/5 de frec_100kHz
			begin
				cont_gen_frec <= 0;
				if( cont_frec_100kHz == 3'd2 ) 
					begin
						if( cambio == 1'b1 ) cambio <= 0;
						else cambio <= cambio+ 1'b1;
					end
				if( cont_frec_100kHz == 3'd4 ) 
					begin
						cont_frec_100kHz <= 0;
						frec_100kHz <= ~frec_100kHz;
					end
				else cont_frec_100kHz <= cont_frec_100kHz + 1'b1;
			end
		else cont_gen_frec <= cont_gen_frec + 1'b1;
	end
	
assign SCL = frec_100kHz;

// LECTURA DEL DATO
parameter ADDR = 7'b1001000,
			ACK = 1'bZ,
			P1 = 1'b0,
			P0 = 1'b0;
reg prev_SDA = 0;
reg [1:0] sampled_SCL = 0;
reg [1:0] sampled_cambio = 0;
reg working = 0;
reg STOP = 0;
reg out_EN = 0;
reg SDA_out = 0;
reg [5:0] op_counter = 0;
reg [15:0] DATA = 0;

assign SDA = out_EN ? SDA_out : 1'bZ;

parameter CONFIGURACION = 2'd0,
			APUNTADOR = 2'd1,
			LECTURA = 2'd2;
reg [1:0] estado = 0;

always @ ( posedge clk ) 
	begin
		sampled_SCL <= { sampled_SCL[0], SCL };
		sampled_cambio <= { sampled_cambio[0], cambio };
		if( (sampled_cambio == 2'b10) && ~working ) // Si el reloj esta en HIGH y no esta trabajando
			begin
				out_EN <= 1'b1;
				SDA_out <= 1'b0; // HIGH a LOW para SDA == START || Se genera el bit de START
				working <= 1'b1;
			end
		else if( (sampled_cambio == 2'b10) && STOP )
			begin
				out_EN <= 1'b1;
				STOP <= 1'b0;
				SDA_out <= 1'b1; // LOW a HIGH para SDA == STOP || Se genera el bit de STOP
				working <= 1'b0;
			end
		else if( (sampled_cambio == 2'b01) && working ) // Si hay un cambio al flanco positivo en cambio y se encuentra trabajando
			begin
				if( estado == CONFIGURACION )
						begin
							out_EN <= 1'b1;
							case( op_counter )
								//////////////////////
								// Se manda el ADRR //
								6'd0: SDA_out <= ADDR[6];
								6'd1: SDA_out <= ADDR[5];
								6'd2: SDA_out <= ADDR[4];
								6'd3: SDA_out <= ADDR[3];
								6'd4: SDA_out <= ADDR[2];
								6'd5: SDA_out <= ADDR[1];
								6'd6: SDA_out <= ADDR[0];
								6'd7: SDA_out <= 1'b0;  // Escritura
								//////////////////////
								6'd8: SDA_out <= ACK;
								//////////////////////
								// Se manda el CONF //
								6'd9: SDA_out <= 0;
								6'd10: SDA_out <= 0;
								6'd11: SDA_out <= 0;
								6'd12: SDA_out <= 0;
								6'd13: SDA_out <= 0;
								6'd14: SDA_out <= 0;
								6'd15: SDA_out <= 0;
								6'd16: SDA_out <= 1;
								//////////////////////
								6'd17: SDA_out <= ACK;
								//////////////////////
								// Se manda el MSB  //
								6'd18: SDA_out <= CONFIG_MSB[7];
								6'd19: SDA_out <= CONFIG_MSB[6];
								6'd20: SDA_out <= CONFIG_MSB[5];
								6'd21: SDA_out <= CONFIG_MSB[4];
								6'd22: SDA_out <= CONFIG_MSB[3];
								6'd23: SDA_out <= CONFIG_MSB[2];
								6'd24: SDA_out <= CONFIG_MSB[1];
								6'd25: SDA_out <= CONFIG_MSB[0];
								//////////////////////
								6'd26: SDA_out <= ACK;	
								//////////////////////
								// Se manda el MSB  //
								6'd27: SDA_out <= CONFIG_LSB[7];
								6'd28: SDA_out <= CONFIG_LSB[6];
								6'd29: SDA_out <= CONFIG_LSB[5];
								6'd30: SDA_out <= CONFIG_LSB[4];
								6'd31: SDA_out <= CONFIG_LSB[3];
								6'd32: SDA_out <= CONFIG_LSB[2];
								6'd33: SDA_out <= CONFIG_LSB[1];
								6'd34: SDA_out <= CONFIG_LSB[0];
								//////////////////////
								6'd35: SDA_out <= ACK;	
								//////////////////////
								6'd36: 
									begin 
										STOP <= 1'b1;
										SDA_out <= 0;
										estado <= APUNTADOR;
									end
							endcase
							if( op_counter == 6'd36 ) op_counter <= 0;
							else op_counter <= op_counter + 1'b1;
						end
				else if( estado == APUNTADOR )
						begin
							out_EN <= 1'b1;
							case( op_counter )
								//////////////////////
								// Se manda el ADRR //
								6'd0: SDA_out <= ADDR[6];
								6'd1: SDA_out <= ADDR[5];
								6'd2: SDA_out <= ADDR[4];
								6'd3: SDA_out <= ADDR[3];
								6'd4: SDA_out <= ADDR[2];
								6'd5: SDA_out <= ADDR[1];
								6'd6: SDA_out <= ADDR[0];
								6'd7: SDA_out <= 1'b0;  // Escritura
								//////////////////////
								6'd8: SDA_out <= ACK;
								//////////////////////
								6'd9: SDA_out <= 0;
								6'd10: SDA_out <= 0;
								6'd11: SDA_out <= 0;
								6'd12: SDA_out <= 0;
								6'd13: SDA_out <= 0;
								6'd14: SDA_out <= 0;
								6'd15: SDA_out <= P1;
								6'd16: SDA_out <= P0;
								//////////////////////
								6'd17: SDA_out <= ACK;
								//////////////////////
								6'd18: 
									begin 
										STOP <= 1'b1;
										SDA_out <= 0;
										estado <= LECTURA;
									end
							endcase
							if( op_counter == 6'd18 ) op_counter <= 0;
							else op_counter <= op_counter + 1'b1;
						end
				else if( estado == LECTURA )
						begin
							case( op_counter )
								//////////////////////
								// Se manda el ADRR //
								6'd0: 
									begin
										SDA_out <= ADDR[6];
										out_EN <= 1'b1;
									end
								6'd1: SDA_out <= ADDR[5];
								6'd2: SDA_out <= ADDR[4];
								6'd3: SDA_out <= ADDR[3];
								6'd4: SDA_out <= ADDR[2];
								6'd5: SDA_out <= ADDR[1];
								6'd6: SDA_out <= ADDR[0];
								6'd7: SDA_out <= 1'b1;  // Lectura
								//////////////////////
								6'd8: SDA_out <= ACK;
								//////////////////////
								
								//////////////////////
								6'd17: SDA_out <= 0; // ACK
								6'd18: out_EN <= 1'b0;
								//////////////////////

								//////////////////////
								6'd26: 
									begin
										SDA_out <= 0; // ACK
										out_EN <= 1'b1;
									end
								//////////////////////
								6'd27: 
									begin
										STOP <= 1'b1;
										estado <= CONFIGURACION;
									end
								default: SDA_out <= SDA_out;
							endcase
							if( op_counter == 6'd27 ) op_counter <= 0;
							else op_counter <= op_counter + 1'b1;
						end
			end
		else if( (sampled_cambio == 2'b10) && working ) // Si hay un cambio al flanco negativo en cambio y se encuentra trabajando
			begin
				if( estado == LECTURA )
						begin
							case( op_counter )
								//////////////////////
								6'd9: 
									begin
										DATA[15] <= SDA;
										out_EN <= 1'b0;
									end
								6'd10: 
									begin
										DATA[15] <= SDA;
										out_EN <= 1'b0;
									end
								6'd11: DATA[14] <= SDA;
								6'd12: DATA[13] <= SDA;
								6'd13: DATA[12] <= SDA;
								6'd14: DATA[11] <= SDA;
								6'd15: DATA[10] <= SDA;
								6'd16: DATA[9] <= SDA;
								6'd17: 
									begin 
										DATA[8] <= SDA;
										out_EN <= 1'b1;
									end
								//////////////////////
								6'd19: 
									begin
										DATA[7] <= SDA;
										out_EN <= 1'b0;
									end
								6'd20: DATA[6] <= SDA;
								6'd21: DATA[5] <= SDA;
								6'd22: DATA[4] <= SDA;
								6'd23: DATA[3] <= SDA;
								6'd24: DATA[2] <= SDA;
								6'd25: DATA[1] <= SDA;
								6'd26: 
									begin
										DATA[0] <= SDA;
										out_EN <= 1'b0;
									end
								//////////////////////
								default: DATA <= DATA;
							endcase
						end
			end
	end

wire [7:0] numero;

// Asignacion de grados y medida
CONVERSION U1
(
 .clk(clk),
 .switch(switch),
 .DATA(DATA),
 .numero(numero)
); 

// Muestra los datos en el display
DISPLAY U2
(
 .clk(clk),
 .switch(switch),
 .numero(numero),
 .DISPLAY(DISPLAY)
); 

endmodule
