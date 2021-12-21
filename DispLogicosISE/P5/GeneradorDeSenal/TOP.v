//////////////////////////////////////////////////////////////////////////////////
module TOP(
    input clk,
    input ext,
    input sens_opt,
    output SCL,
    output reg SDA
    );

reg [11:0] DATA = 0;
reg [11:0] contadorDATA = 0;
reg [11:0] contadorDATA2;
reg flip = 0;

reg [1:0] prevext = 0;
always @ ( posedge clk )
	begin
		prevext <= { prevext[0], ext };
		if( prevext == 2'b01)
			begin
				contadorDATA <= contadorDATA + 1'b1;
				contadorDATA2 <= ~contadorDATA;
				if(contadorDATA == 12'd4095) begin flip <= ~flip; end
				if( sens_opt ) DATA <= contadorDATA;
				else if(flip) DATA <= contadorDATA2;
				else DATA <= contadorDATA;
			end
	end

//Generador de frecuencia de 250kHz
reg frec_1MHz = 0;
reg [4:0] cont_1MHz = 0;
reg [3:0] cont_pulsos = 0;
reg frec_200kHz = 0;
reg cambioHIGH = 0;
reg cambioLOW = 0;

always @ ( posedge clk )
	begin
		if( cont_1MHz == 5'd12 )
			begin
				cont_1MHz <= 0;
				frec_1MHz <= ~frec_1MHz;
				cont_pulsos <= cont_pulsos + 1'b1;
				if( cont_pulsos == 4'd9 ) cont_pulsos <= 0;
				case( cont_pulsos )
					4'd0: frec_200kHz <= 1'b1;
					4'd1: frec_200kHz <= 1'b1;
					4'd2: begin frec_200kHz <= 1'b1; cambioHIGH <= 1'b1; end
					4'd3: begin frec_200kHz <= 1'b1; cambioHIGH <= 1'b0; end
					4'd4: frec_200kHz <= 1'b1;
					4'd5: frec_200kHz <= 1'b0;
					4'd6: frec_200kHz <= 1'b0;
					4'd7: begin frec_200kHz <= 1'b0; cambioLOW <= 1'b1; end
					4'd8: begin frec_200kHz <= 1'b0; cambioLOW <= 1'b0; end
					4'd9: frec_200kHz <= 1'b0;
				endcase
			end
		else cont_1MHz <= cont_1MHz + 1'b1;
	end
	
assign SCL = frec_200kHz;

reg [4:0] estado = 0;

always @ ( posedge frec_200kHz )
	begin
		if( estado == 5'd28 ) estado <= 0;
		else estado <= estado + 1'b1;
	end

parameter [7:0] byteInicio = 8'hC0;
parameter ACK = 1'bZ;
//parameter DATA = 12'h064;
//wire [11:0] DATA = { DATAi , 4'b0 };

always @ ( * )
	begin
		case( estado )
			5'd0: 
				begin
					if( cambioHIGH ) SDA <= 1'b0; // START
					if( cambioLOW ) SDA <= byteInicio[7]; 	// Se prepara el siguiente bit a mandar
																		// mientras el SCL esta en LOW
				end
			5'd1: if( cambioLOW ) SDA <= byteInicio[6];
			5'd2: if( cambioLOW ) SDA <= byteInicio[5];
			5'd3: if( cambioLOW ) SDA <= byteInicio[4];
			5'd4: if( cambioLOW ) SDA <= byteInicio[3];
			5'd5: if( cambioLOW ) SDA <= byteInicio[2];
			5'd6: if( cambioLOW ) SDA <= byteInicio[1];
			5'd7: if( cambioLOW ) SDA <= byteInicio[0];
			5'd8: if( cambioLOW ) SDA <= ACK; //ACK
			5'd9: if( cambioLOW ) SDA <= 1'b0; // FAST MODE C2
			5'd10: if( cambioLOW ) SDA <= 1'b0; // FAST MODE C1
			5'd11: if( cambioLOW ) SDA <= 1'b0; // PD1
			5'd12: if( cambioLOW ) SDA <= 1'b0; // PD0
			5'd13: if( cambioLOW ) SDA <= DATA[11]; // DATA11
			5'd14: if( cambioLOW ) SDA <= DATA[10]; // DATA10
			5'd15: if( cambioLOW ) SDA <= DATA[9]; // DATA9
			5'd16: if( cambioLOW ) SDA <= DATA[8]; // DATA8
			5'd17: if( cambioLOW ) SDA <= ACK; // ACK
			5'd18: if( cambioLOW ) SDA <= DATA[7]; // DATA7
			5'd19: if( cambioLOW ) SDA <= DATA[6]; // DATA6
			5'd20: if( cambioLOW ) SDA <= DATA[5]; // DATA5
			5'd21: if( cambioLOW ) SDA <= DATA[4]; // DATA4
			5'd22: if( cambioLOW ) SDA <= DATA[3]; // DATA3
			5'd23: if( cambioLOW ) SDA <= DATA[2]; // DATA2
			5'd24: if( cambioLOW ) SDA <= DATA[1]; // DATA1
			5'd25: if( cambioLOW ) SDA <= DATA[0]; // DATA0
			5'd26: if( cambioLOW ) SDA <= ACK; // ACK
			5'd27: SDA <= SDA; // Espera para el mandado del ultimo bit
			5'd28: if( cambioHIGH ) SDA <= 1'b1; // STOP
		endcase
	end

endmodule
