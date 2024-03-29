//////////////////////////////////////////////////////////////////////////////////
module GENERADOR(
    //input clke,
	 input clk,
    //input ready,
    output reg [11:0] ECG
    );

reg frec_500Hz = 0;
reg [15:0] cont_500Hz = 0;

always @ ( posedge clk )
	begin
		if( cont_500Hz == 16'd50_000 )
			begin
				cont_500Hz <= 0;
				frec_500Hz <= ~frec_500Hz;
			end
		else cont_500Hz <= cont_500Hz + 1'b1;
	end

reg [8:0] contSenal = 0; // Contador de 0 - 499
//wire incrSenal = frec_500Hz && ready;

always @ ( posedge frec_500Hz )
	begin
		if( contSenal == 9'd500 ) contSenal <= 0;
		else contSenal <= contSenal + 1'b1;
	end
	
always @ ( posedge clk )
	begin
		case( contSenal )
			9'd0: ECG <= 12'h800;
			9'd1: ECG <= 12'h819;
			9'd2: ECG <= 12'h833;
			9'd3: ECG <= 12'h84D;
			9'd4: ECG <= 12'h866;
			9'd5: ECG <= 12'h880;
			9'd6: ECG <= 12'h89A;
			9'd7: ECG <= 12'h8B3;
			9'd8: ECG <= 12'h8CD;
			9'd9: ECG <= 12'h8E7;
			9'd10: ECG <= 12'h900;
			9'd11: ECG <= 12'h91A;
			9'd12: ECG <= 12'h933;
			9'd13: ECG <= 12'h94C;
			9'd14: ECG <= 12'h966;
			9'd15: ECG <= 12'h97F;
			9'd16: ECG <= 12'h998;
			9'd17: ECG <= 12'h9B2;
			9'd18: ECG <= 12'h9CB;
			9'd19: ECG <= 12'h9E4;
			9'd20: ECG <= 12'h9FD;
			9'd21: ECG <= 12'hA16;
			9'd22: ECG <= 12'hA2E;
			9'd23: ECG <= 12'hA47;
			9'd24: ECG <= 12'hA60;
			9'd25: ECG <= 12'hA78;
			9'd26: ECG <= 12'hA91;
			9'd27: ECG <= 12'hAA9;
			9'd28: ECG <= 12'hAC1;
			9'd29: ECG <= 12'hAD9;
			9'd30: ECG <= 12'hAF1;
			9'd31: ECG <= 12'hB09;
			9'd32: ECG <= 12'hB21;
			9'd33: ECG <= 12'hB38;
			9'd34: ECG <= 12'hB50;
			9'd35: ECG <= 12'hB67;
			9'd36: ECG <= 12'hB7E;
			9'd37: ECG <= 12'hB96;
			9'd38: ECG <= 12'hBAC;
			9'd39: ECG <= 12'hBC3;
			9'd40: ECG <= 12'hBDA;
			9'd41: ECG <= 12'hBF0;
			9'd42: ECG <= 12'hC07;
			9'd43: ECG <= 12'hC1D;
			9'd44: ECG <= 12'hC33;
			9'd45: ECG <= 12'hC49;
			9'd46: ECG <= 12'hC5E;
			9'd47: ECG <= 12'hC74;
			9'd48: ECG <= 12'hC89;
			9'd49: ECG <= 12'hC9E;
			9'd50: ECG <= 12'hCB3;
			9'd51: ECG <= 12'hCC8;
			9'd52: ECG <= 12'hCDC;
			9'd53: ECG <= 12'hCF1;
			9'd54: ECG <= 12'hD05;
			9'd55: ECG <= 12'hD19;
			9'd56: ECG <= 12'hD2C;
			9'd57: ECG <= 12'hD40;
			9'd58: ECG <= 12'hD53;
			9'd59: ECG <= 12'hD66;
			9'd60: ECG <= 12'hD79;
			9'd61: ECG <= 12'hD8C;
			9'd62: ECG <= 12'hD9E;
			9'd63: ECG <= 12'hDB0;
			9'd64: ECG <= 12'hDC2;
			9'd65: ECG <= 12'hDD4;
			9'd66: ECG <= 12'hDE6;
			9'd67: ECG <= 12'hDF7;
			9'd68: ECG <= 12'hE08;
			9'd69: ECG <= 12'hE19;
			9'd70: ECG <= 12'hE29;
			9'd71: ECG <= 12'hE39;
			9'd72: ECG <= 12'hE49;
			9'd73: ECG <= 12'hE59;
			9'd74: ECG <= 12'hE69;
			9'd75: ECG <= 12'hE78;
			9'd76: ECG <= 12'hE87;
			9'd77: ECG <= 12'hE96;
			9'd78: ECG <= 12'hEA4;
			9'd79: ECG <= 12'hEB2;
			9'd80: ECG <= 12'hEC0;
			9'd81: ECG <= 12'hECE;
			9'd82: ECG <= 12'hEDB;
			9'd83: ECG <= 12'hEE8;
			9'd84: ECG <= 12'hEF5;
			9'd85: ECG <= 12'hF02;
			9'd86: ECG <= 12'hF0E;
			9'd87: ECG <= 12'hF1A;
			9'd88: ECG <= 12'hF26;
			9'd89: ECG <= 12'hF31;
			9'd90: ECG <= 12'hF3C;
			9'd91: ECG <= 12'hF47;
			9'd92: ECG <= 12'hF51;
			9'd93: ECG <= 12'hF5C;
			9'd94: ECG <= 12'hF66;
			9'd95: ECG <= 12'hF6F;
			9'd96: ECG <= 12'hF79;
			9'd97: ECG <= 12'hF82;
			9'd98: ECG <= 12'hF8A;
			9'd99: ECG <= 12'hF93;
			9'd100: ECG <= 12'hF9B;
			9'd101: ECG <= 12'hFA3;
			9'd102: ECG <= 12'hFAA;
			9'd103: ECG <= 12'hFB1;
			9'd104: ECG <= 12'hFB8;
			9'd105: ECG <= 12'hFBF;
			9'd106: ECG <= 12'hFC5;
			9'd107: ECG <= 12'hFCB;
			9'd108: ECG <= 12'hFD0;
			9'd109: ECG <= 12'hFD6;
			9'd110: ECG <= 12'hFDB;
			9'd111: ECG <= 12'hFDF;
			9'd112: ECG <= 12'hFE4;
			9'd113: ECG <= 12'hFE8;
			9'd114: ECG <= 12'hFEB;
			9'd115: ECG <= 12'hFEF;
			9'd116: ECG <= 12'hFF2;
			9'd117: ECG <= 12'hFF5;
			9'd118: ECG <= 12'hFF7;
			9'd119: ECG <= 12'hFF9;
			9'd120: ECG <= 12'hFFB;
			9'd121: ECG <= 12'hFFC;
			9'd122: ECG <= 12'hFFE;
			9'd123: ECG <= 12'hFFE;
			9'd124: ECG <= 12'hFFF;
			9'd125: ECG <= 12'hFFF;
			9'd126: ECG <= 12'hFFF;
			9'd127: ECG <= 12'hFFE;
			9'd128: ECG <= 12'hFFE;
			9'd129: ECG <= 12'hFFC;
			9'd130: ECG <= 12'hFFB;
			9'd131: ECG <= 12'hFF9;
			9'd132: ECG <= 12'hFF7;
			9'd133: ECG <= 12'hFF5;
			9'd134: ECG <= 12'hFF2;
			9'd135: ECG <= 12'hFEF;
			9'd136: ECG <= 12'hFEB;
			9'd137: ECG <= 12'hFE8;
			9'd138: ECG <= 12'hFE4;
			9'd139: ECG <= 12'hFDF;
			9'd140: ECG <= 12'hFDB;
			9'd141: ECG <= 12'hFD6;
			9'd142: ECG <= 12'hFD0;
			9'd143: ECG <= 12'hFCB;
			9'd144: ECG <= 12'hFC5;
			9'd145: ECG <= 12'hFBF;
			9'd146: ECG <= 12'hFB8;
			9'd147: ECG <= 12'hFB1;
			9'd148: ECG <= 12'hFAA;
			9'd149: ECG <= 12'hFA3;
			9'd150: ECG <= 12'hF9B;
			9'd151: ECG <= 12'hF93;
			9'd152: ECG <= 12'hF8A;
			9'd153: ECG <= 12'hF82;
			9'd154: ECG <= 12'hF79;
			9'd155: ECG <= 12'hF6F;
			9'd156: ECG <= 12'hF66;
			9'd157: ECG <= 12'hF5C;
			9'd158: ECG <= 12'hF51;
			9'd159: ECG <= 12'hF47;
			9'd160: ECG <= 12'hF3C;
			9'd161: ECG <= 12'hF31;
			9'd162: ECG <= 12'hF26;
			9'd163: ECG <= 12'hF1A;
			9'd164: ECG <= 12'hF0E;
			9'd165: ECG <= 12'hF02;
			9'd166: ECG <= 12'hEF5;
			9'd167: ECG <= 12'hEE8;
			9'd168: ECG <= 12'hEDB;
			9'd169: ECG <= 12'hECE;
			9'd170: ECG <= 12'hEC0;
			9'd171: ECG <= 12'hEB2;
			9'd172: ECG <= 12'hEA4;
			9'd173: ECG <= 12'hE96;
			9'd174: ECG <= 12'hE87;
			9'd175: ECG <= 12'hE78;
			9'd176: ECG <= 12'hE69;
			9'd177: ECG <= 12'hE59;
			9'd178: ECG <= 12'hE49;
			9'd179: ECG <= 12'hE39;
			9'd180: ECG <= 12'hE29;
			9'd181: ECG <= 12'hE19;
			9'd182: ECG <= 12'hE08;
			9'd183: ECG <= 12'hDF7;
			9'd184: ECG <= 12'hDE6;
			9'd185: ECG <= 12'hDD4;
			9'd186: ECG <= 12'hDC2;
			9'd187: ECG <= 12'hDB0;
			9'd188: ECG <= 12'hD9E;
			9'd189: ECG <= 12'hD8C;
			9'd190: ECG <= 12'hD79;
			9'd191: ECG <= 12'hD66;
			9'd192: ECG <= 12'hD53;
			9'd193: ECG <= 12'hD40;
			9'd194: ECG <= 12'hD2C;
			9'd195: ECG <= 12'hD19;
			9'd196: ECG <= 12'hD05;
			9'd197: ECG <= 12'hCF1;
			9'd198: ECG <= 12'hCDC;
			9'd199: ECG <= 12'hCC8;
			9'd200: ECG <= 12'hCB3;
			9'd201: ECG <= 12'hC9E;
			9'd202: ECG <= 12'hC89;
			9'd203: ECG <= 12'hC74;
			9'd204: ECG <= 12'hC5E;
			9'd205: ECG <= 12'hC49;
			9'd206: ECG <= 12'hC33;
			9'd207: ECG <= 12'hC1D;
			9'd208: ECG <= 12'hC07;
			9'd209: ECG <= 12'hBF0;
			9'd210: ECG <= 12'hBDA;
			9'd211: ECG <= 12'hBC3;
			9'd212: ECG <= 12'hBAC;
			9'd213: ECG <= 12'hB96;
			9'd214: ECG <= 12'hB7E;
			9'd215: ECG <= 12'hB67;
			9'd216: ECG <= 12'hB50;
			9'd217: ECG <= 12'hB38;
			9'd218: ECG <= 12'hB21;
			9'd219: ECG <= 12'hB09;
			9'd220: ECG <= 12'hAF1;
			9'd221: ECG <= 12'hAD9;
			9'd222: ECG <= 12'hAC1;
			9'd223: ECG <= 12'hAA9;
			9'd224: ECG <= 12'hA91;
			9'd225: ECG <= 12'hA78;
			9'd226: ECG <= 12'hA60;
			9'd227: ECG <= 12'hA47;
			9'd228: ECG <= 12'hA2E;
			9'd229: ECG <= 12'hA16;
			9'd230: ECG <= 12'h9FD;
			9'd231: ECG <= 12'h9E4;
			9'd232: ECG <= 12'h9CB;
			9'd233: ECG <= 12'h9B2;
			9'd234: ECG <= 12'h998;
			9'd235: ECG <= 12'h97F;
			9'd236: ECG <= 12'h966;
			9'd237: ECG <= 12'h94C;
			9'd238: ECG <= 12'h933;
			9'd239: ECG <= 12'h91A;
			9'd240: ECG <= 12'h900;
			9'd241: ECG <= 12'h8E7;
			9'd242: ECG <= 12'h8CD;
			9'd243: ECG <= 12'h8B3;
			9'd244: ECG <= 12'h89A;
			9'd245: ECG <= 12'h880;
			9'd246: ECG <= 12'h866;
			9'd247: ECG <= 12'h84D;
			9'd248: ECG <= 12'h833;
			9'd249: ECG <= 12'h819;
			9'd250: ECG <= 12'h800;
			9'd251: ECG <= 12'h7E6;
			9'd252: ECG <= 12'h7CC;
			9'd253: ECG <= 12'h7B2;
			9'd254: ECG <= 12'h799;
			9'd255: ECG <= 12'h77F;
			9'd256: ECG <= 12'h765;
			9'd257: ECG <= 12'h74C;
			9'd258: ECG <= 12'h732;
			9'd259: ECG <= 12'h718;
			9'd260: ECG <= 12'h6FF;
			9'd261: ECG <= 12'h6E5;
			9'd262: ECG <= 12'h6CC;
			9'd263: ECG <= 12'h6B3;
			9'd264: ECG <= 12'h699;
			9'd265: ECG <= 12'h680;
			9'd266: ECG <= 12'h667;
			9'd267: ECG <= 12'h64D;
			9'd268: ECG <= 12'h634;
			9'd269: ECG <= 12'h61B;
			9'd270: ECG <= 12'h602;
			9'd271: ECG <= 12'h5E9;
			9'd272: ECG <= 12'h5D1;
			9'd273: ECG <= 12'h5B8;
			9'd274: ECG <= 12'h59F;
			9'd275: ECG <= 12'h587;
			9'd276: ECG <= 12'h56E;
			9'd277: ECG <= 12'h556;
			9'd278: ECG <= 12'h53E;
			9'd279: ECG <= 12'h526;
			9'd280: ECG <= 12'h50E;
			9'd281: ECG <= 12'h4F6;
			9'd282: ECG <= 12'h4DE;
			9'd283: ECG <= 12'h4C7;
			9'd284: ECG <= 12'h4AF;
			9'd285: ECG <= 12'h498;
			9'd286: ECG <= 12'h481;
			9'd287: ECG <= 12'h469;
			9'd288: ECG <= 12'h453;
			9'd289: ECG <= 12'h43C;
			9'd290: ECG <= 12'h425;
			9'd291: ECG <= 12'h40F;
			9'd292: ECG <= 12'h3F8;
			9'd293: ECG <= 12'h3E2;
			9'd294: ECG <= 12'h3CC;
			9'd295: ECG <= 12'h3B6;
			9'd296: ECG <= 12'h3A1;
			9'd297: ECG <= 12'h38B;
			9'd298: ECG <= 12'h376;
			9'd299: ECG <= 12'h361;
			9'd300: ECG <= 12'h34C;
			9'd301: ECG <= 12'h337;
			9'd302: ECG <= 12'h323;
			9'd303: ECG <= 12'h30E;
			9'd304: ECG <= 12'h2FA;
			9'd305: ECG <= 12'h2E6;
			9'd306: ECG <= 12'h2D3;
			9'd307: ECG <= 12'h2BF;
			9'd308: ECG <= 12'h2AC;
			9'd309: ECG <= 12'h299;
			9'd310: ECG <= 12'h286;
			9'd311: ECG <= 12'h273;
			9'd312: ECG <= 12'h261;
			9'd313: ECG <= 12'h24F;
			9'd314: ECG <= 12'h23D;
			9'd315: ECG <= 12'h22B;
			9'd316: ECG <= 12'h219;
			9'd317: ECG <= 12'h208;
			9'd318: ECG <= 12'h1F7;
			9'd319: ECG <= 12'h1E6;
			9'd320: ECG <= 12'h1D6;
			9'd321: ECG <= 12'h1C6;
			9'd322: ECG <= 12'h1B6;
			9'd323: ECG <= 12'h1A6;
			9'd324: ECG <= 12'h196;
			9'd325: ECG <= 12'h187;
			9'd326: ECG <= 12'h178;
			9'd327: ECG <= 12'h169;
			9'd328: ECG <= 12'h15B;
			9'd329: ECG <= 12'h14D;
			9'd330: ECG <= 12'h13F;
			9'd331: ECG <= 12'h131;
			9'd332: ECG <= 12'h124;
			9'd333: ECG <= 12'h117;
			9'd334: ECG <= 12'h10A;
			9'd335: ECG <= 12'hFD;
			9'd336: ECG <= 12'hF1;
			9'd337: ECG <= 12'hE5;
			9'd338: ECG <= 12'hD9;
			9'd339: ECG <= 12'hCE;
			9'd340: ECG <= 12'hC3;
			9'd341: ECG <= 12'hB8;
			9'd342: ECG <= 12'hAE;
			9'd343: ECG <= 12'hA3;
			9'd344: ECG <= 12'h99;
			9'd345: ECG <= 12'h90;
			9'd346: ECG <= 12'h86;
			9'd347: ECG <= 12'h7D;
			9'd348: ECG <= 12'h75;
			9'd349: ECG <= 12'h6C;
			9'd350: ECG <= 12'h64;
			9'd351: ECG <= 12'h5C;
			9'd352: ECG <= 12'h55;
			9'd353: ECG <= 12'h4E;
			9'd354: ECG <= 12'h47;
			9'd355: ECG <= 12'h40;
			9'd356: ECG <= 12'h3A;
			9'd357: ECG <= 12'h34;
			9'd358: ECG <= 12'h2F;
			9'd359: ECG <= 12'h29;
			9'd360: ECG <= 12'h24;
			9'd361: ECG <= 12'h20;
			9'd362: ECG <= 12'h1B;
			9'd363: ECG <= 12'h17;
			9'd364: ECG <= 12'h14;
			9'd365: ECG <= 12'h10;
			9'd366: ECG <= 12'hD;
			9'd367: ECG <= 12'hA;
			9'd368: ECG <= 12'h8;
			9'd369: ECG <= 12'h6;
			9'd370: ECG <= 12'h4;
			9'd371: ECG <= 12'h3;
			9'd372: ECG <= 12'h1;
			9'd373: ECG <= 12'h1;
			9'd374: ECG <= 12'h0;
			9'd375: ECG <= 12'h0;
			9'd376: ECG <= 12'h0;
			9'd377: ECG <= 12'h1;
			9'd378: ECG <= 12'h1;
			9'd379: ECG <= 12'h3;
			9'd380: ECG <= 12'h4;
			9'd381: ECG <= 12'h6;
			9'd382: ECG <= 12'h8;
			9'd383: ECG <= 12'hA;
			9'd384: ECG <= 12'hD;
			9'd385: ECG <= 12'h10;
			9'd386: ECG <= 12'h14;
			9'd387: ECG <= 12'h17;
			9'd388: ECG <= 12'h1B;
			9'd389: ECG <= 12'h20;
			9'd390: ECG <= 12'h24;
			9'd391: ECG <= 12'h29;
			9'd392: ECG <= 12'h2F;
			9'd393: ECG <= 12'h34;
			9'd394: ECG <= 12'h3A;
			9'd395: ECG <= 12'h40;
			9'd396: ECG <= 12'h47;
			9'd397: ECG <= 12'h4E;
			9'd398: ECG <= 12'h55;
			9'd399: ECG <= 12'h5C;
			9'd400: ECG <= 12'h64;
			9'd401: ECG <= 12'h6C;
			9'd402: ECG <= 12'h75;
			9'd403: ECG <= 12'h7D;
			9'd404: ECG <= 12'h86;
			9'd405: ECG <= 12'h90;
			9'd406: ECG <= 12'h99;
			9'd407: ECG <= 12'hA3;
			9'd408: ECG <= 12'hAE;
			9'd409: ECG <= 12'hB8;
			9'd410: ECG <= 12'hC3;
			9'd411: ECG <= 12'hCE;
			9'd412: ECG <= 12'hD9;
			9'd413: ECG <= 12'hE5;
			9'd414: ECG <= 12'hF1;
			9'd415: ECG <= 12'hFD;
			9'd416: ECG <= 12'h10A;
			9'd417: ECG <= 12'h117;
			9'd418: ECG <= 12'h124;
			9'd419: ECG <= 12'h131;
			9'd420: ECG <= 12'h13F;
			9'd421: ECG <= 12'h14D;
			9'd422: ECG <= 12'h15B;
			9'd423: ECG <= 12'h169;
			9'd424: ECG <= 12'h178;
			9'd425: ECG <= 12'h187;
			9'd426: ECG <= 12'h196;
			9'd427: ECG <= 12'h1A6;
			9'd428: ECG <= 12'h1B6;
			9'd429: ECG <= 12'h1C6;
			9'd430: ECG <= 12'h1D6;
			9'd431: ECG <= 12'h1E6;
			9'd432: ECG <= 12'h1F7;
			9'd433: ECG <= 12'h208;
			9'd434: ECG <= 12'h219;
			9'd435: ECG <= 12'h22B;
			9'd436: ECG <= 12'h23D;
			9'd437: ECG <= 12'h24F;
			9'd438: ECG <= 12'h261;
			9'd439: ECG <= 12'h273;
			9'd440: ECG <= 12'h286;
			9'd441: ECG <= 12'h299;
			9'd442: ECG <= 12'h2AC;
			9'd443: ECG <= 12'h2BF;
			9'd444: ECG <= 12'h2D3;
			9'd445: ECG <= 12'h2E6;
			9'd446: ECG <= 12'h2FA;
			9'd447: ECG <= 12'h30E;
			9'd448: ECG <= 12'h323;
			9'd449: ECG <= 12'h337;
			9'd450: ECG <= 12'h34C;
			9'd451: ECG <= 12'h361;
			9'd452: ECG <= 12'h376;
			9'd453: ECG <= 12'h38B;
			9'd454: ECG <= 12'h3A1;
			9'd455: ECG <= 12'h3B6;
			9'd456: ECG <= 12'h3CC;
			9'd457: ECG <= 12'h3E2;
			9'd458: ECG <= 12'h3F8;
			9'd459: ECG <= 12'h40F;
			9'd460: ECG <= 12'h425;
			9'd461: ECG <= 12'h43C;
			9'd462: ECG <= 12'h453;
			9'd463: ECG <= 12'h469;
			9'd464: ECG <= 12'h481;
			9'd465: ECG <= 12'h498;
			9'd466: ECG <= 12'h4AF;
			9'd467: ECG <= 12'h4C7;
			9'd468: ECG <= 12'h4DE;
			9'd469: ECG <= 12'h4F6;
			9'd470: ECG <= 12'h50E;
			9'd471: ECG <= 12'h526;
			9'd472: ECG <= 12'h53E;
			9'd473: ECG <= 12'h556;
			9'd474: ECG <= 12'h56E;
			9'd475: ECG <= 12'h587;
			9'd476: ECG <= 12'h59F;
			9'd477: ECG <= 12'h5B8;
			9'd478: ECG <= 12'h5D1;
			9'd479: ECG <= 12'h5E9;
			9'd480: ECG <= 12'h602;
			9'd481: ECG <= 12'h61B;
			9'd482: ECG <= 12'h634;
			9'd483: ECG <= 12'h64D;
			9'd484: ECG <= 12'h667;
			9'd485: ECG <= 12'h680;
			9'd486: ECG <= 12'h699;
			9'd487: ECG <= 12'h6B3;
			9'd488: ECG <= 12'h6CC;
			9'd489: ECG <= 12'h6E5;
			9'd490: ECG <= 12'h6FF;
			9'd491: ECG <= 12'h718;
			9'd492: ECG <= 12'h732;
			9'd493: ECG <= 12'h74C;
			9'd494: ECG <= 12'h765;
			9'd495: ECG <= 12'h77F;
			9'd496: ECG <= 12'h799;
			9'd497: ECG <= 12'h7B2;
			9'd498: ECG <= 12'h7CC;
			9'd499: ECG <= 12'h7E6;
			9'd500: ECG <= 12'h7E6;
			default: ECG <= 12'h800;
		endcase
	end

endmodule
