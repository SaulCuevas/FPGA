//////////////////////////////////////////////////////////////////////////////////
module MCP4725(
    input clk,
	 input ext,
    output reg SDA,
    output SCL
    );

reg [11:0] DATA = 0;
reg [7:0] contadorDATA = 0;
/*reg [21:0] delay = 0;
always @ ( posedge clk )
	begin
		if( delay == 22'd200_000 )
			begin
					delay <= 0;
					if( contadorDATA == 8'd249 ) contadorDATA <= 0;
					else contadorDATA <= contadorDATA + 1'b1;
			end
		else delay <= delay + 1'b1;
	end*/
	
reg [1:0] prevext = 0;
always @ ( posedge clk )
	begin
		prevext <= { prevext[0], ext };
		if( prevext == 2'b01)
			begin
				if( contadorDATA == 8'd249 ) contadorDATA <= 0;
				else contadorDATA <= contadorDATA + 1'b1;
			end
	end

always @ ( posedge clk )
	begin
		case( contadorDATA )
			8'd0: DATA <= 12'h138;
			8'd1: DATA <= 12'h121;
			8'd2: DATA <= 12'h121;
			8'd3: DATA <= 12'h121;
			8'd4: DATA <= 12'h138;
			8'd5: DATA <= 12'h14E;
			8'd6: DATA <= 12'h14E;
			8'd7: DATA <= 12'h164;
			8'd8: DATA <= 12'h164;
			8'd9: DATA <= 12'h17A;
			8'd10: DATA <= 12'h17A;
			8'd11: DATA <= 12'h17A;
			8'd12: DATA <= 12'h17A;
			8'd13: DATA <= 12'h17A;
			8'd14: DATA <= 12'h191;
			8'd15: DATA <= 12'h191;
			8'd16: DATA <= 12'h1A7;
			8'd17: DATA <= 12'h1A7;
			8'd18: DATA <= 12'h1BD;
			8'd19: DATA <= 12'h1BD;
			8'd20: DATA <= 12'h1D3;
			8'd21: DATA <= 12'h1EA;
			8'd22: DATA <= 12'h200;
			8'd23: DATA <= 12'h216;
			8'd24: DATA <= 12'h22C;
			8'd25: DATA <= 12'h22C;
			8'd26: DATA <= 12'h216;
			8'd27: DATA <= 12'h22C;
			8'd28: DATA <= 12'h259;
			8'd29: DATA <= 12'h26F;
			8'd30: DATA <= 12'h29C;
			8'd31: DATA <= 12'h2C8;
			8'd32: DATA <= 12'h30B;
			8'd33: DATA <= 12'h34E;
			8'd34: DATA <= 12'h390;
			8'd35: DATA <= 12'h3A7;
			8'd36: DATA <= 12'h3BD;
			8'd37: DATA <= 12'h3D3;
			8'd38: DATA <= 12'h3E9;
			8'd39: DATA <= 12'h42C;
			8'd40: DATA <= 12'h485;
			8'd41: DATA <= 12'h4DE;
			8'd42: DATA <= 12'h50B;
			8'd43: DATA <= 12'h537;
			8'd44: DATA <= 12'h564;
			8'd45: DATA <= 12'h564;
			8'd46: DATA <= 12'h564;
			8'd47: DATA <= 12'h54E;
			8'd48: DATA <= 12'h521;
			8'd49: DATA <= 12'h50B;
			8'd50: DATA <= 12'h4F5;
			8'd51: DATA <= 12'h4F5;
			8'd52: DATA <= 12'h4C8;
			8'd53: DATA <= 12'h485;
			8'd54: DATA <= 12'h416;
			8'd55: DATA <= 12'h3A7;
			8'd56: DATA <= 12'h364;
			8'd57: DATA <= 12'h321;
			8'd58: DATA <= 12'h2F5;
			8'd59: DATA <= 12'h2C8;
			8'd60: DATA <= 12'h26F;
			8'd61: DATA <= 12'h22C;
			8'd62: DATA <= 12'h216;
			8'd63: DATA <= 12'h259;
			8'd64: DATA <= 12'h2F5;
			8'd65: DATA <= 12'h37A;
			8'd66: DATA <= 12'h3BD;
			8'd67: DATA <= 12'h3D3;
			8'd68: DATA <= 12'h3A7;
			8'd69: DATA <= 12'h3A7;
			8'd70: DATA <= 12'h3BD;
			8'd71: DATA <= 12'h3D3;
			8'd72: DATA <= 12'h400;
			8'd73: DATA <= 12'h416;
			8'd74: DATA <= 12'h416;
			8'd75: DATA <= 12'h42C;
			8'd76: DATA <= 12'h443;
			8'd77: DATA <= 12'h459;
			8'd78: DATA <= 12'h46F;
			8'd79: DATA <= 12'h46F;
			8'd80: DATA <= 12'h459;
			8'd81: DATA <= 12'h459;
			8'd82: DATA <= 12'h443;
			8'd83: DATA <= 12'h459;
			8'd84: DATA <= 12'h46F;
			8'd85: DATA <= 12'h46F;
			8'd86: DATA <= 12'h485;
			8'd87: DATA <= 12'h485;
			8'd88: DATA <= 12'h46F;
			8'd89: DATA <= 12'h46F;
			8'd90: DATA <= 12'h459;
			8'd91: DATA <= 12'h459;
			8'd92: DATA <= 12'h459;
			8'd93: DATA <= 12'h443;
			8'd94: DATA <= 12'h459;
			8'd95: DATA <= 12'h459;
			8'd96: DATA <= 12'h46F;
			8'd97: DATA <= 12'h485;
			8'd98: DATA <= 12'h485;
			8'd99: DATA <= 12'h46F;
			8'd100: DATA <= 12'h459;
			8'd101: DATA <= 12'h42C;
			8'd102: DATA <= 12'h42C;
			8'd103: DATA <= 12'h416;
			8'd104: DATA <= 12'h416;
			8'd105: DATA <= 12'h400;
			8'd106: DATA <= 12'h400;
			8'd107: DATA <= 12'h3D3;
			8'd108: DATA <= 12'h3BD;
			8'd109: DATA <= 12'h3A7;
			8'd110: DATA <= 12'h3BD;
			8'd111: DATA <= 12'h3D3;
			8'd112: DATA <= 12'h400;
			8'd113: DATA <= 12'h400;
			8'd114: DATA <= 12'h400;
			8'd115: DATA <= 12'h400;
			8'd116: DATA <= 12'h416;
			8'd117: DATA <= 12'h416;
			8'd118: DATA <= 12'h400;
			8'd119: DATA <= 12'h3D3;
			8'd120: DATA <= 12'h390;
			8'd121: DATA <= 12'h390;
			8'd122: DATA <= 12'h3A7;
			8'd123: DATA <= 12'h3E9;
			8'd124: DATA <= 12'h400;
			8'd125: DATA <= 12'h3E9;
			8'd126: DATA <= 12'h3BD;
			8'd127: DATA <= 12'h3A7;
			8'd128: DATA <= 12'h3BD;
			8'd129: DATA <= 12'h400;
			8'd130: DATA <= 12'h42C;
			8'd131: DATA <= 12'h443;
			8'd132: DATA <= 12'h459;
			8'd133: DATA <= 12'h443;
			8'd134: DATA <= 12'h42C;
			8'd135: DATA <= 12'h416;
			8'd136: DATA <= 12'h400;
			8'd137: DATA <= 12'h400;
			8'd138: DATA <= 12'h42C;
			8'd139: DATA <= 12'h46F;
			8'd140: DATA <= 12'h49C;
			8'd141: DATA <= 12'h49C;
			8'd142: DATA <= 12'h46F;
			8'd143: DATA <= 12'h42C;
			8'd144: DATA <= 12'h400;
			8'd145: DATA <= 12'h3E9;
			8'd146: DATA <= 12'h3BD;
			8'd147: DATA <= 12'h37A;
			8'd148: DATA <= 12'h364;
			8'd149: DATA <= 12'h34E;
			8'd150: DATA <= 12'h37A;
			8'd151: DATA <= 12'h390;
			8'd152: DATA <= 12'h390;
			8'd153: DATA <= 12'h390;
			8'd154: DATA <= 12'h37A;
			8'd155: DATA <= 12'h364;
			8'd156: DATA <= 12'h34E;
			8'd157: DATA <= 12'h337;
			8'd158: DATA <= 12'h30B;
			8'd159: DATA <= 12'h30B;
			8'd160: DATA <= 12'h30B;
			8'd161: DATA <= 12'h30B;
			8'd162: DATA <= 12'h2F5;
			8'd163: DATA <= 12'h2DE;
			8'd164: DATA <= 12'h2B2;
			8'd165: DATA <= 12'h2B2;
			8'd166: DATA <= 12'h2B2;
			8'd167: DATA <= 12'h2C8;
			8'd168: DATA <= 12'h29C;
			8'd169: DATA <= 12'h26F;
			8'd170: DATA <= 12'h29C;
			8'd171: DATA <= 12'h3A7;
			8'd172: DATA <= 12'h5A7;
			8'd173: DATA <= 12'h885;
			8'd174: DATA <= 12'hB63;
			8'd175: DATA <= 12'hD7A;
			8'd176: DATA <= 12'hE15;
			8'd177: DATA <= 12'hCDE;
			8'd178: DATA <= 12'hA16;
			8'd179: DATA <= 12'h685;
			8'd180: DATA <= 12'h337;
			8'd181: DATA <= 12'h121;
			8'd182: DATA <= 12'h9C;
			8'd183: DATA <= 12'h138;
			8'd184: DATA <= 12'h22C;
			8'd185: DATA <= 12'h2C8;
			8'd186: DATA <= 12'h2F5;
			8'd187: DATA <= 12'h2C8;
			8'd188: DATA <= 12'h29C;
			8'd189: DATA <= 12'h285;
			8'd190: DATA <= 12'h285;
			8'd191: DATA <= 12'h29C;
			8'd192: DATA <= 12'h285;
			8'd193: DATA <= 12'h285;
			8'd194: DATA <= 12'h26F;
			8'd195: DATA <= 12'h26F;
			8'd196: DATA <= 12'h26F;
			8'd197: DATA <= 12'h285;
			8'd198: DATA <= 12'h2B2;
			8'd199: DATA <= 12'h2C8;
			8'd200: DATA <= 12'h2C8;
			8'd201: DATA <= 12'h2C8;
			8'd202: DATA <= 12'h2C8;
			8'd203: DATA <= 12'h2B2;
			8'd204: DATA <= 12'h2B2;
			8'd205: DATA <= 12'h2C8;
			8'd206: DATA <= 12'h2DE;
			8'd207: DATA <= 12'h2F5;
			8'd208: DATA <= 12'h30B;
			8'd209: DATA <= 12'h30B;
			8'd210: DATA <= 12'h30B;
			8'd211: DATA <= 12'h30B;
			8'd212: DATA <= 12'h321;
			8'd213: DATA <= 12'h34E;
			8'd214: DATA <= 12'h37A;
			8'd215: DATA <= 12'h3A7;
			8'd216: DATA <= 12'h3BD;
			8'd217: DATA <= 12'h3D3;
			8'd218: DATA <= 12'h400;
			8'd219: DATA <= 12'h42C;
			8'd220: DATA <= 12'h46F;
			8'd221: DATA <= 12'h485;
			8'd222: DATA <= 12'h485;
			8'd223: DATA <= 12'h485;
			8'd224: DATA <= 12'h4B2;
			8'd225: DATA <= 12'h4DE;
			8'd226: DATA <= 12'h537;
			8'd227: DATA <= 12'h57A;
			8'd228: DATA <= 12'h5A7;
			8'd229: DATA <= 12'h5BD;
			8'd230: DATA <= 12'h5BD;
			8'd231: DATA <= 12'h5BD;
			8'd232: DATA <= 12'h5D3;
			8'd233: DATA <= 12'h600;
			8'd234: DATA <= 12'h62C;
			8'd235: DATA <= 12'h642;
			8'd236: DATA <= 12'h616;
			8'd237: DATA <= 12'h5A7;
			8'd238: DATA <= 12'h54E;
			8'd239: DATA <= 12'h521;
			8'd240: DATA <= 12'h4F5;
			8'd241: DATA <= 12'h4B2;
			8'd242: DATA <= 12'h443;
			8'd243: DATA <= 12'h3BD;
			8'd244: DATA <= 12'h34E;
			8'd245: DATA <= 12'h321;
			8'd246: DATA <= 12'h321;
			8'd247: DATA <= 12'h321;
			8'd248: DATA <= 12'h2F5;
			8'd249: DATA <= 12'h29C;
		endcase
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
