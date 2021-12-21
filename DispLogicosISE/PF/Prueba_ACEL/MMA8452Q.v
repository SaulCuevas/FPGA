//////////////////////////////////////////////////////////////////////////////////
module MMA8452Q(
    input clk,
	 input [7:0] MSB_X,
    output SCL,
    inout SDA,
	 output RS,
	 output RW,
	 output ENA,
	 output [7:0] DATA_LCD
    );


//parameter CONFIG_MSB = 8'b11000100;
//parameter CONFIG_LSB = 8'b10000011;
parameter CTRL_REG1 = 8'b00000001;
parameter CTRL_REG2 = 8'b00000000;
parameter CTRL_REG1_ADDR = 8'h2A;

/*
// Asignacion de lectura por medio del switch
wire [7:0] CONFIG_MSB = switch ? 8'b11000100 : 8'b11010100;
*/

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
parameter ADDR = 7'b0011101,
			ACK = 1'bZ,
			//MSB_X = 8'h01,
			MSB_Y = 8'h03,
			MSB_Z = 8'h05;
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

/*parameter APUNTADOR = 1'd0,
			LECTURA = 1'd1;
reg estado = 0;*/

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
								6'd9: SDA_out <= CTRL_REG1_ADDR[7];
								6'd10: SDA_out <= CTRL_REG1_ADDR[6];
								6'd11: SDA_out <= CTRL_REG1_ADDR[5];
								6'd12: SDA_out <= CTRL_REG1_ADDR[4];
								6'd13: SDA_out <= CTRL_REG1_ADDR[3];
								6'd14: SDA_out <= CTRL_REG1_ADDR[2];
								6'd15: SDA_out <= CTRL_REG1_ADDR[1];
								6'd16: SDA_out <= CTRL_REG1_ADDR[0];
								//////////////////////
								6'd17: SDA_out <= ACK;
								//////////////////////
								// Se manda el MSB  //
								6'd18: SDA_out <= CTRL_REG1[7];
								6'd19: SDA_out <= CTRL_REG1[6];
								6'd20: SDA_out <= CTRL_REG1[5];
								6'd21: SDA_out <= CTRL_REG1[4];
								6'd22: SDA_out <= CTRL_REG1[3];
								6'd23: SDA_out <= CTRL_REG1[2];
								6'd24: SDA_out <= CTRL_REG1[1];
								6'd25: SDA_out <= CTRL_REG1[0];
								//////////////////////
								6'd26: SDA_out <= ACK;	
								//////////////////////
								// Se manda el LSB  //
								6'd27: SDA_out <= CTRL_REG2[7];
								6'd28: SDA_out <= CTRL_REG2[6];
								6'd29: SDA_out <= CTRL_REG2[5];
								6'd30: SDA_out <= CTRL_REG2[4];
								6'd31: SDA_out <= CTRL_REG2[3];
								6'd32: SDA_out <= CTRL_REG2[2];
								6'd33: SDA_out <= CTRL_REG2[1];
								6'd34: SDA_out <= CTRL_REG2[0];
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
								6'd9: SDA_out <= MSB_X[7];
								6'd10: SDA_out <= MSB_X[6];
								6'd11: SDA_out <= MSB_X[5];
								6'd12: SDA_out <= MSB_X[4];
								6'd13: SDA_out <= MSB_X[3];
								6'd14: SDA_out <= MSB_X[2];
								6'd15: SDA_out <= MSB_X[1];
								6'd16: SDA_out <= MSB_X[0];
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
										//estado <= APUNTADOR;
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

wire [11:0] acelX = DATA[15:4];

wire [7:0] UNID;
wire [7:0] DECE;
wire [7:0] CENT;
wire [7:0] MILL;

// Convierte el numero binario a BCD
BINaBCD U1
(
 .clk(clk),
 .numero(acelX),
 .UNID(UNID),
 .DECE(DECE),
 .CENT(CENT),
 .MILL(MILL)
); 

// Muestra los datos en el display
LIB_LCD_INTESC_REVD U2
(
 .CLK(clk),
 .RS(RS),
 .RW(RW),
 .ENA(ENA),
 .DATA_LCD(DATA_LCD),
 .UNID(UNID),
 .DECE(DECE),
 .CENT(CENT),
 .MILL(MILL)
); 

endmodule
