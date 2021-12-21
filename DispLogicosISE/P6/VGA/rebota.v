//////////////////////////////////////////////////////////////////////////////////
module rebota(
    input clk,
	 input reset,
    output vga_h_sync,
    output vga_v_sync,
    output reg vga_R,
    output reg vga_G,
    output reg vga_B,
	 input rx,
	 output reg audio,
	 output [7:0] leds
    );

reg [99:0] kirbyR [99:0];
reg [99:0] kirbyG [99:0];
reg [99:0] kirbyB [99:0];
initial begin
kirbyR[99] = 100'b0000000000000000000000000000000000111000000000000000000000000000000000000000000000000000000000000000;
kirbyR[98] = 100'b0000000000000000000000000000000001111111000000000000000000000000000000000000000000000000000000000000;
kirbyR[97] = 100'b0000000000000000000000000000000111111111111100000000000000000000000000000000000000000000000000000000;
kirbyR[96] = 100'b0000000000000000000000000000001111111111111100000000000000000000000000000000000000000000000000000000;
kirbyR[95] = 100'b0000000000000000000000000000011111111111111110000000000000000000000000000000000000000000000000000000;
kirbyR[94] = 100'b0000000000000000000000000000111111111111111110000000000000000000000000000000000000000000000000000000;
kirbyR[93] = 100'b0000000000000000000000000011111111111111111111000000000000000000000000000000000000000000000000000000;
kirbyR[92] = 100'b0000000000000000000000000011111111111111111111000000000000000000000000000000000000000000000000000000;
kirbyR[91] = 100'b0000000000000000000000000011111111111111111111000000000000000000000000000000000000000000000000000000;
kirbyR[90] = 100'b0000000000000000000000000011111111111111111111000000000000000000000000000000000000000000000000000000;
kirbyR[89] = 100'b0000000000000000000000000011111111111111111111100000000000000000000000000000000000000000000000000000;
kirbyR[88] = 100'b0000000000000000000000000011111111111111111111100000000000000000000000000000000000000000000000000000;
kirbyR[87] = 100'b0000000000000000000000000011111111111111111111110000000000000000000000000000000000000000000000000000;
kirbyR[86] = 100'b0000000000000000000000000111111111111111111111110000000000000000000000000000000000000000000000000000;
kirbyR[85] = 100'b0000000000000000000000111111111111111111111111110000000000000000000000000000000000000000000000000000;
kirbyR[84] = 100'b0000000000000000001111111111111111111111111111110000000000000000000001111111000000000000000000000000;
kirbyR[83] = 100'b0000000000000000011111111111111111111111111111111110000000000000111111111111110000000000000000000000;
kirbyR[82] = 100'b0000000000000000011111111111111111111111111111111111111111100111111111111111110000000000000000000000;
kirbyR[81] = 100'b0000000000000000011111111111111111111111111111111111111111111111111111111111111100000000000000000000;
kirbyR[80] = 100'b0000000000000000111111111111111111111111111111111111111111111111111111111111111100000000000000000000;
kirbyR[79] = 100'b0000000000000000111111111111111111111111111111111111111111111111111111111111111100000000000000000000;
kirbyR[78] = 100'b0000000000000000111111111111111111111111111111111111111111111111111111111111111100000000000000000000;
kirbyR[77] = 100'b0000000000000000111111111111111111111111111111111111111111111111111111111111111100000000000000000000;
kirbyR[76] = 100'b0000000000000000111111111111111111111111111111111111111111111111111111111111111100000000000000000000;
kirbyR[75] = 100'b0000000000000000111111111111111111111111111111111111111111111111111111111111111100000000000000000000;
kirbyR[74] = 100'b0000000000000001111111111111111111111111111111111111111111111111111111111111111100000000000000000000;
kirbyR[73] = 100'b0000000000000001111111111111111111111111111111111111111111111111111111111111111100000000000000000000;
kirbyR[72] = 100'b0000000000000001111111111111111111111111111111111111111111111111111111111111111000000000000000000000;
kirbyR[71] = 100'b0000000000000001111111111111111111111111111111111111111111111111111111111111111000000000000000000000;
kirbyR[70] = 100'b0000000000000000111111111111111111111111111111111111111111111111111111111111111000000000000000000000;
kirbyR[69] = 100'b0000000000000000011111111111111111111111111111111111111111111111111111111111111100000000000000000000;
kirbyR[68] = 100'b0000000000000000011111111111111111111111111111111111111111111111111111111111111100000000000000000000;
kirbyR[67] = 100'b0000000000000000001111111111111111111111111111111111111111111111111111111111111100000000000000000000;
kirbyR[66] = 100'b0000000000000000000111111111111111111111111111111111111111111111111111111111111110000000000000000000;
kirbyR[65] = 100'b0000000000000000000111110000000111111111111111111111111111111111111111111111111110000000000000000000;
kirbyR[64] = 100'b0000000000000000000011000000000000011111111111111111111111111111111111111111111111000000000000000000;
kirbyR[63] = 100'b0000000000000000000000000000000000000111111111111111111111111111111111111111111111000000000000000000;
kirbyR[62] = 100'b0000000000000000000000001000000000000001111111111111111111111111111111111111111111000000000000000000;
kirbyR[61] = 100'b0000000000000000000100011100011000000000111111111111111111111111111111111111111111100000000000000000;
kirbyR[60] = 100'b0000000000000000010000011111000000000000111111111111111111111111111111111111111111100000000000000000;
kirbyR[59] = 100'b0000000000000000110000000100000001000000111111111111111111111111111111111111111111110000000000000000;
kirbyR[58] = 100'b0000000000000001110000000000000011000000011111111111111111111111111111111111111111110000000000000000;
kirbyR[57] = 100'b0000000000000001111000000000000011100000011111111111111111111111111111100011111111110000000000000000;
kirbyR[56] = 100'b0000000000000011111000000000000011100000011111111111111111111111111110000000111111110000000000000000;
kirbyR[55] = 100'b0000000000000011111000000000000111110000001111111111111111111111111111111110111111110000000000000000;
kirbyR[54] = 100'b0000000000000011111000000000000111110000001111111111111111111111111111111111011111111000000000000000;
kirbyR[53] = 100'b0000000000000011111000000000000111111000001111111111111111111111110011111111111111111000000000000000;
kirbyR[52] = 100'b0000000000000111110000011110000011111100000111111111111111111111100001111111111111111000000000000000;
kirbyR[51] = 100'b0000000000000111100000011110000001111100000011111111111111111111000001111111111111110000000000000000;
kirbyR[50] = 100'b0000000000001111000000110111000000111100000011111111111111111110000001111111111111110000000000000000;
kirbyR[49] = 100'b0000000000000111000001000111000000111100000111111111111111111100000001111110001111110000000000000000;
kirbyR[48] = 100'b0000000000000111000000001111100000111100000111111111111111111100000001111110001111100000000000000000;
kirbyR[47] = 100'b0000000000000111000000001111000000111000000111111111111111111100000001111100001111100000000000000000;
kirbyR[46] = 100'b0000000000000011111100011110000001111000001111111111111111111000100001111000001111100000000000000000;
kirbyR[45] = 100'b0000000000000011111100001100111111110000001111111111111111111001110011111000001111100000000000000000;
kirbyR[44] = 100'b0000000000000011111000000000111111110000001111111111111111111011110011110000001111000000000000000000;
kirbyR[43] = 100'b0000000000000001110001100001111111110000011111111111111111111111110111110000011111000000000000000000;
kirbyR[42] = 100'b0000000000000001110001100011111111111010011111111111111111111111111111110110011111000000000000000000;
kirbyR[41] = 100'b0000000000000000110000110011111111111010011111111111111111111111111111111110111110000000000000000000;
kirbyR[40] = 100'b0000000000000000111000111111111111101110011111111111111111111111111111111110111110000000000000000000;
kirbyR[39] = 100'b0000000000000000111000011111111111111100011111111111111111111111111111111111111110000000000000000000;
kirbyR[38] = 100'b0000000000000000001000011111111111111001111111111111111111111111111111111111111100000000000000000000;
kirbyR[37] = 100'b0000000000000000000000011111111111100011111111111111111111111111111111101111111100000000000000000000;
kirbyR[36] = 100'b0000000000000000000000001111111110001111111111111111111111111111111111100111111100000000000000000000;
kirbyR[35] = 100'b0000000000000000000000001111111100111111111111111111111111111111111111111111111100000000000000000000;
kirbyR[34] = 100'b0000000000000000000000001111111111111111111111111111111111111111111111111111111000000000000000000000;
kirbyR[33] = 100'b0000000000000000000000000111111111111111111111111111111111111111111111111111110000000000000000000000;
kirbyR[32] = 100'b0000000000000000000000000111111111111111111111111111111111111111111111111111100000000000000000000000;
kirbyR[31] = 100'b0000000000000000000000000011111111111111111111111111111111111111111111111111000000000000000000000000;
kirbyR[30] = 100'b0000000000000000000000000011111111111111111111111111111111111111111111111110000000000000000000000000;
kirbyR[29] = 100'b0000000000000000000111110000111111111111111111111111111111111111111111111100100000000000000000000000;
kirbyR[28] = 100'b0000000000000000000011111100001111111111111111111111111111111111111111111111110000000000000000000000;
kirbyR[27] = 100'b0000000000000000000011111111000011111111111111111111111111111111111111111111110000000000000000000000;
kirbyR[26] = 100'b0000000000000000000001111111000001111111111111111111111111111111111111111111000000000000000000000000;
kirbyR[25] = 100'b0000000000000000000001111111100000011111111111111111111111111111111111111110000000000000000000000000;
kirbyR[24] = 100'b0000000000000000000000111111110000000011111111111111111111111111111111111100000000000000000000000000;
kirbyR[23] = 100'b0000000000000000000000111111111000000000011111111111111111111111111111110000000000000000000000000000;
kirbyR[22] = 100'b0000000000000000000000001111111000000000000011111111111111111110001111100000000000000000000000000000;
kirbyR[21] = 100'b0000000000000000000000000111111000000000000000011111111110000000000010000000000000000000000000000000;
kirbyR[20] = 100'b0000000000000000000000000111111110000000000000000010000000000000000000000000000000000000000000000000;
kirbyR[19] = 100'b0000000000000000000000000001111110000000000000000000000000000000000000000000000000000000000000000000;
kirbyR[18] = 100'b0000000000000000000000000000111111000000000000000000000000000000000000000000000000000000000000000000;
kirbyR[17] = 100'b0000000000000000000000000000011111110000000000000000000000000000000000000000000000000000000000000000;
kirbyR[16] = 100'b0000000000000000000000000000000111111000000000000000000000000000000000000000000000000000000000000000;
kirbyR[15] = 100'b0000000000000000000000000000000000111110000000000000000000000000000000000000000000000000000000000000;
kirbyR[14] = 100'b0000000000000000000000000000000000001111000000000000000000000000000000000000000000000000000000000000;
kirbyR[13] = 100'b0000000000000000000000000000000000000001110000000000000000000000000000000000000000000000000000000000;
kirbyR[12] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyR[11] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyR[10] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyR[9] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyR[8] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyR[7] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyR[6] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyR[5] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyR[4] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyR[3] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyR[2] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyR[1] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyR[0] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[99] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[98] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[97] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[96] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[95] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[94] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[93] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[92] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[91] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[90] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[89] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[88] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[87] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[86] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[85] = 100'b0000000000000000000000001000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[84] = 100'b0000000000000000000111110000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[83] = 100'b0000000000000000001111101000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[82] = 100'b0000000000000000011111111000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[81] = 100'b0000000000000000011111111100000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[80] = 100'b0000000000000000011111111110000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[79] = 100'b0000000000000000011111111110100000000000000100000000000000000000000000000000000000000000000000000000;
kirbyG[78] = 100'b0000000000000000011111111110100000000001101010100100000000000000000000000000000000000000000000000000;
kirbyG[77] = 100'b0000000000000000111111111111000000000011111111111100000000000000000000000000000000000000000000000000;
kirbyG[76] = 100'b0000000000000000111111111111110000000011111111111011100100000000000000000000000000000000000000000000;
kirbyG[75] = 100'b0000000000000000111111111111111100000011111111111111100100000000000000000000000000000000000000000000;
kirbyG[74] = 100'b0000000000000000111111111111111111000001111111111111100000000000000000000000000000000000000000000000;
kirbyG[73] = 100'b0000000000000001111111111111111111100001111111111111111100000000000000000000000000000000000000000000;
kirbyG[72] = 100'b0000000000000001111111111111111111010001111111111111111111010000000000000000000000000000000000000000;
kirbyG[71] = 100'b0000000000000000111111111111111111101001111111111111111111110100000000000000000000000000000000000000;
kirbyG[70] = 100'b0000000000000000111111111111111111111111111111111111111111100100000000000000000000000000000000000000;
kirbyG[69] = 100'b0000000000000000011111111111111111111111111111111111111111100100000000000000000000000000000000000000;
kirbyG[68] = 100'b0000000000000000001111111111111111111111111111111111111111101111000000000000000000000000000000000000;
kirbyG[67] = 100'b0000000000000000001111111111111111111111111111111111111111111011000000000000000000000000000000000000;
kirbyG[66] = 100'b0000000000000000000111111000111111111111111111111111111111111111000000000000000000000000000000000000;
kirbyG[65] = 100'b0000000000000000000011100000000011111111111111111111111111111111100000000000000000000000000000000000;
kirbyG[64] = 100'b0000000000000000000010000000000000011111111111111111111111111111100100000000000000000000000000000000;
kirbyG[63] = 100'b0000000000000000000000000000000000000011111111111111111111111111101000000000000000000000000000000000;
kirbyG[62] = 100'b0000000000000000000000000000000000000000111111111111111111111111011100000000000000000000000000000000;
kirbyG[61] = 100'b0000000000000000000000001000000000000000111111111111111111111111011100000000000000000000000000000000;
kirbyG[60] = 100'b0000000000000000000000010100000000000000011111111111111111000011110010000000000000000000000000000000;
kirbyG[59] = 100'b0000000000000000010000000000000000000000011111111111111110000000111101000000000000000000000000000000;
kirbyG[58] = 100'b0000000000000000010000000000000000000000011111111111111110000000000001000000000000000000000000000000;
kirbyG[57] = 100'b0000000000000001000000000000000000000000011111111111111110000000000000000000000000000000000000000000;
kirbyG[56] = 100'b0000000000000000011000000000000000000000011111111111111111100000000100000000000000000000000000000000;
kirbyG[55] = 100'b0000000000000000111000000000000010000000001111111111111111111101111100000000000000000000000000000000;
kirbyG[54] = 100'b0000000000000011111000000000000111000000001111111111111111111111111001000000000000000000000000000000;
kirbyG[53] = 100'b0000000000000011111000000110000110000000000111111111111111111111100001110000000000000000000000000000;
kirbyG[52] = 100'b0000000000000011110000011110000011100000000111111111111111111110000001110000000000000000000000000000;
kirbyG[51] = 100'b0000000000000011100000011110000001100000000011111111111111111110000001110100000000000000000000000000;
kirbyG[50] = 100'b0000000000000111000001110111000000110000000011111111111111111100000000010100000000000000000000000000;
kirbyG[49] = 100'b0000000000000111000001100111100000011000000011111111111111111100000001111100000000000000000000000000;
kirbyG[48] = 100'b0000000000000010000011001111100000011000000111111111111111111000000001101100000000000000000000000000;
kirbyG[47] = 100'b0000000000000011000000001111000000011000000111111111111111111000000000111000000000000000000000000000;
kirbyG[46] = 100'b0000000000000011111100011111000000110000000111111111111111111000100001111000000000000000000000000000;
kirbyG[45] = 100'b0000000000000001111100001110011111110000001111111111111111110001110001110000000000000000000000000000;
kirbyG[44] = 100'b0000000000000001110000000000111111110000001111111111111111110011110001110000000000000000000000000000;
kirbyG[43] = 100'b0000000000000001110001100001111111110000001111111111111111110011110011110000000000000000000000000000;
kirbyG[42] = 100'b0000000000000000110001100011111111100000011111111111111111110011110111100110000000000000000000000000;
kirbyG[41] = 100'b0000000000000000110000110011111111110010011111111111111111110011100111101110000000000000000000000000;
kirbyG[40] = 100'b0000000000000000110000111111111111101000001111111111111111110001111111101110000000000000000000000000;
kirbyG[39] = 100'b0000000000000000011000011111111111000100011111111111111111111000111111101100000000000000000000000000;
kirbyG[38] = 100'b0000000000000000001000011111111110010000111111111111111111111111111111101100000000000000000000000000;
kirbyG[37] = 100'b0000000000000000000000001111111001100011111111111111111111111111111111101000000000000000000000000000;
kirbyG[36] = 100'b0000000000000000000000001111100110001111111111111111111111111111111111100010000000000000000000000000;
kirbyG[35] = 100'b0000000000000000000000001110001000011111111111111111111111111111111111111110000000000000000000000000;
kirbyG[34] = 100'b0000000000000000000000000111110011111111111111111111111111111111111111111101000000000000000000000000;
kirbyG[33] = 100'b0000000000000000000000000111111111111111111111111111111111111111111111111100000000000000000000000000;
kirbyG[32] = 100'b0000000000000000000000000011111111111111111111111111111111111111111111111010000000000000000000000000;
kirbyG[31] = 100'b0000000000000000000000000011111111111111111111111111111111111111111111111000000000000000000000000000;
kirbyG[30] = 100'b0000000000000000000000000001111111111111111111111111111111111111111111111010000000000000000000000000;
kirbyG[29] = 100'b0000000000000000000011110000011111111111111111111111111111111111111111111100000000000000000000000000;
kirbyG[28] = 100'b0000000000000000000011111100001111111111111111111111111111111111111111111010000000000000000000000000;
kirbyG[27] = 100'b0000000000000000000011111111100011111111111111111111111111111111111111110000000000000000000000000000;
kirbyG[26] = 100'b0000000000000000000001111111110000111111111111111111111111111111111111101110000000000000000000000000;
kirbyG[25] = 100'b0000000000000000000001111111111000001111111111111111111111111111111101011110000000000000000000000000;
kirbyG[24] = 100'b0000000000000000000000111111111000000011111111111111111111111111111110011100000000000000000000000000;
kirbyG[23] = 100'b0000000000000000000000111111111100000000001111111111111111111111110001110000000000000000000000000000;
kirbyG[22] = 100'b0000000000000000000000011111111110000000000001111111111111110000000111100000000000000000000000000000;
kirbyG[21] = 100'b0000000000000000000000011111111110000000000000011111110000000000000010000000000000000000000000000000;
kirbyG[20] = 100'b0000000000000000000000001111111111000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[19] = 100'b0000000000000000000000000001111111100000000000000000000000000000000000000000000000000000000000000000;
kirbyG[18] = 100'b0000000000000000000000000001011111100000000000000000000000000000000000000000000000000000000000000000;
kirbyG[17] = 100'b0000000000000000000000000000010111111000000000000000000000000000000000000000000000000000000000000000;
kirbyG[16] = 100'b0000000000000000000000000000000111111100000000000000000000000000000000000000000000000000000000000000;
kirbyG[15] = 100'b0000000000000000000000000000000001111111000000000000000000000000000000000000000000000000000000000000;
kirbyG[14] = 100'b0000000000000000000000000000000000001111110000000000000000000000000000000000000000000000000000000000;
kirbyG[13] = 100'b0000000000000000000000000000000000000001111000000000000000000000000000000000000000000000000000000000;
kirbyG[12] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[11] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[10] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[9] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[8] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[7] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[6] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[5] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[4] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[3] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[2] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[1] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyG[0] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[99] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[98] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[97] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[96] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[95] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[94] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[93] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[92] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[91] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[90] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[89] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[88] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[87] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[86] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[85] = 100'b0000000000000000000000011000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[84] = 100'b0000000000000000000111110100000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[83] = 100'b0000000000000000011111111110000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[82] = 100'b0000000000000000011111111101110000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[81] = 100'b0000000000000000011111111111010010000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[80] = 100'b0000000000000000011111111111111100000000000000111000000000000000100000000000000000000000000000000000;
kirbyB[79] = 100'b0000000000000000011111111111111000000000111111111111111000000000000000000000000000000000000000000000;
kirbyB[78] = 100'b0000000000000000011111111111111100000011111111111111111000000000000000000000000000000000000000000000;
kirbyB[77] = 100'b0000000000000000111111111111111110000011111111111111111110111000000000000000000000000000000000000000;
kirbyB[76] = 100'b0000000000000000111111111111111111000011111111111111111111111010000000000000000000000000000000000000;
kirbyB[75] = 100'b0000000000000000111111111111111111110011111111111111111111111110000000000000000000000000000000000000;
kirbyB[74] = 100'b0000000000000000111111111111111111110011111111111111111111111110000000000000000000000000000000000000;
kirbyB[73] = 100'b0000000000000001111111111111111111111001111111111111111111111110000000000000000000000000000000000000;
kirbyB[72] = 100'b0000000000000001111111111111111111111101111111111111111111111111000000000000000000000000000000000000;
kirbyB[71] = 100'b0000000000000001111111111111111111111111111111111111111111111111111000000000000000000000000000000000;
kirbyB[70] = 100'b0000000000000000111111111111111111111111111111111111111111111111111110000000000000000000000000000000;
kirbyB[69] = 100'b0000000000000000011111111111111111111111111111111111111111111111111110000000000000000000000000000000;
kirbyB[68] = 100'b0000000000000000011111111111111111111111111111111111111111111111111111000000000000000000000000000000;
kirbyB[67] = 100'b0000000000000000001111111111111111111111111111111111111111111111111111000000000000000000000000000000;
kirbyB[66] = 100'b0000000000000000000111111000111111111111111111111111111111111111111111000000000000000000000000000000;
kirbyB[65] = 100'b0000000000000000000111100000000011111111111111111111111111111111111111101000000000000000000000000000;
kirbyB[64] = 100'b0000000000000000000010000000000000011111111111111111111111111111111111110100000000000000000000000000;
kirbyB[63] = 100'b0000000000000000000000000000000000000011111111111111111111111111111111110100000000000000000000000000;
kirbyB[62] = 100'b0000000000000000000000000000000000000001111111111111111111111111111101111000000000000000000000000000;
kirbyB[61] = 100'b0000000000000000000000000000000000000000111111111111111111111111111111101010000100000000000000000000;
kirbyB[60] = 100'b0000000000000000000000000000000000000000111111111111111111000011111110111010100000000000000000000000;
kirbyB[59] = 100'b0000000000000000000000000000000000000000111111111111111110000000111111101101001000000000000000000000;
kirbyB[58] = 100'b0000000000000000000000000000000000000000011111111111111111000000011111010110010000000000000000000000;
kirbyB[57] = 100'b0000000000000000000000000000000000000000011111111111111111000000011110000001010000000000000000000000;
kirbyB[56] = 100'b0000000000000000001011111000100100000000011111111111111111110000011100000000010000000000000000000000;
kirbyB[55] = 100'b0000000000000000001011111111110110000000001111111111111111111111111110101000010000000000000000000000;
kirbyB[54] = 100'b0000000000000000001111111111110100000000001111111111111111111111111111111110001000000000000000000000;
kirbyB[53] = 100'b0000000000000000011011111111110110000000000111111111111111111111100011111011000000000000000000000000;
kirbyB[52] = 100'b0000000000000000010011111111110000000000000111111111111111111111000001111111100000000000000000000000;
kirbyB[51] = 100'b0000000000000000000111111111110000000000000011111111111111111110000001111111010000000000000000000000;
kirbyB[50] = 100'b0000000000000000001111110111111000000000000011111111111111111100000001111111000000000000000000000000;
kirbyB[49] = 100'b0000000000000000011111100111111100000000000111111111111111111100000001111100000000000000000000000000;
kirbyB[48] = 100'b0000000000000000011111001111111110000000000111111111111111111000000001111100000000000000000000000000;
kirbyB[47] = 100'b0000000000000000001110001111111110000000000111111111111111111000000000111000000000000000000000000000;
kirbyB[46] = 100'b0000000000000000111100011111111110000000001111111111111111111000100001111000000000000000000000000000;
kirbyB[45] = 100'b0000000000000000011100011111111110000000001111111111111111111001110001110000001000000000000000000000;
kirbyB[44] = 100'b0000000000000000000000111111111100000000001111111111111111110011110001110000001000000000000000000000;
kirbyB[43] = 100'b0000000000000000000001111111111000000100011111111111111111110011110011110000000000000000000000000000;
kirbyB[42] = 100'b0000000000000000000001111111110000001100011111111111111111110011110111100110001000000000000000000000;
kirbyB[41] = 100'b0000000000000000000000111111100000000010011111111111111111111011101111101110001110000000000000000000;
kirbyB[40] = 100'b0000000000000000000000111111000000000010011111111111111111111001111111101110011100000000000000000000;
kirbyB[39] = 100'b0000000000000000000000011100000000000100011111111111111111111100111111111100111100000000000000000000;
kirbyB[38] = 100'b0000000000000000000000000000000000010001111111111111111111111111111111111101101100000000000000000000;
kirbyB[37] = 100'b0000000000000000000000000000000001100011111111111111111111111111111111101101111000000000000000000000;
kirbyB[36] = 100'b0000000000000000000000000000000110001111111111111111111111111111111111100011110000000000000000000000;
kirbyB[35] = 100'b0000000000000000000000000000011101111111111111111111111111111111111111111111111000000000000000000000;
kirbyB[34] = 100'b0000000000000000000000000011111111111111111111111111111111111111111111111111110000000000000000000000;
kirbyB[33] = 100'b0000000000000000000000000111111111111111111111111111111111111111111111111111100000000000000000000000;
kirbyB[32] = 100'b0000000000000000000000000011111111111111111111111111111111111111111111111111100000000000000000000000;
kirbyB[31] = 100'b0000000000000000000000000011111111111111111111111111111111111111111111111111000000000000000000000000;
kirbyB[30] = 100'b0000000000000000000000000011111111111111111111111111111111111111111111111110000000000000000000000000;
kirbyB[29] = 100'b0000000000000000000000000000111111111111111111111111111111111111111111111110000000000000000000000000;
kirbyB[28] = 100'b0000000000000000000000011111101111111111111111111111111111111111111111111110000000000000000000000000;
kirbyB[27] = 100'b0000000000000000000010001111111111111111111111111111111111111111111111111000000000000000000000000000;
kirbyB[26] = 100'b0000000000000000000011000111111001111111111111111111111111111111111111111000001000000000000000000000;
kirbyB[25] = 100'b0000000000000000000001100011111100001111111111111111111111111111111111000011110000000000000000000000;
kirbyB[24] = 100'b0000000000000000000001110011111110000011111111111111111111111111111110000011110000000000000000000000;
kirbyB[23] = 100'b0000000000000000000000111001111111000000001111111111111111111111110000010111000000000000000000000000;
kirbyB[22] = 100'b0000000000000000000000111000111111100000000011111111111111111110000000111110000000000000000000000000;
kirbyB[21] = 100'b0000000000000000000000011100011111110000000000011111111110000000000001111100000000000000000000000000;
kirbyB[20] = 100'b0000000000000000000000011110011111111000000000000000000000000000000000110000000000000000000000000000;
kirbyB[19] = 100'b0000000000000000000000000111111111111000000000000000000000000000000000000000000000000000000000000000;
kirbyB[18] = 100'b0000000000000000000000000001111111111100000000000000000000000000000000000000000000000000000000000000;
kirbyB[17] = 100'b0000000000000000000000000000111111111110000000000000000000000000000000000000000000000000000000000000;
kirbyB[16] = 100'b0000000000000000000000000000001110111111000000000000000000000000000000000000000000000000000000000000;
kirbyB[15] = 100'b0000000000000000000000000000000011111111110000000000000000000000000000000000000000000000000000000000;
kirbyB[14] = 100'b0000000000000000000000000000000000000011111100000000000000000000000000000000000000000000000000000000;
kirbyB[13] = 100'b0000000000000000000000000000000000000000111111000000000000000000000000000000000000000000000000000000;
kirbyB[12] = 100'b0000000000000000000000000000000000000000000011111100000000000000000000000000000000000000000000000000;
kirbyB[11] = 100'b0000000000000000000000000000000000000000000000000000000001010000000000000000000000000000000000000000;
kirbyB[10] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[9] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[8] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[7] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[6] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[5] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[4] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[3] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[2] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[1] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
kirbyB[0] = 100'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000;
end

wire inDisplayArea;
wire [9:0] CounterX;
wire [8:0] CounterY;

// Generador de reloj de 25MHz
reg clk_25MHz = 0;
always @ (posedge clk) clk_25MHz = ~clk_25MHz;

hvsync_generator syncgen(
 .clk(clk_25MHz), 
 .vga_h_sync(vga_h_sync), 
 .vga_v_sync(vga_v_sync), 
 .inDisplayArea(inDisplayArea), 
 .CounterX(CounterX), 
 .CounterY(CounterY));

wire pausa;

HM_10 bluetooth(
 .clk(clk), 
 .reset(reset),
 .rx(rx),
 .leds(leds),
 .pausa(pausa));

reg [1:0] sampled_pausa;
reg [22:0] cont_100ms = 0;
reg banderaStart;
always @ ( posedge clk ) sampled_pausa <= {pausa, sampled_pausa[1]};

always @ ( posedge clk )
	begin
		if( banderaStart )
			begin
				if( cont_100ms == 23'd4_999_999 )
					begin
						cont_100ms <= 0;
						banderaStart <= 1'b0;
						audio <= 1'b1;
					end
				else 
					begin
						cont_100ms <= cont_100ms + 1'b1;
						audio <= 1'b0;
					end
			end
		else if( sampled_pausa == 2'b10 || sampled_pausa == 2'b01 ) banderaStart <= 1'b1;
	end

/*
//genera un pulso para activar o pausar la cancion
reg [20:0] cont_100ms = 0;
reg banderaStart;
	
always @ ( posedge clk )
	begin
		if( banderaStart )
			begin
				if( cont_100ms == 21'd1_249_999 )
					begin
						cont_100ms <= 0;
						banderaStart <= 1'b0;
						audio <= 1'bZ;
					end
				else 
					begin
						cont_100ms <= cont_100ms + 1'b1;
						audio <= 1'b0;
					end
			end
		else if( (sampled_pausa == 2'b10) || (sampled_pausa == 2'b01) ) banderaStart <= 1'b1;
	end*/

wire border = (CounterX[9:3]==0) || (CounterX[9:3]==74) || (CounterY[8:3]==0) || (CounterY[8:3]==59);
//wire bola = (CounterX>=pos_bolaX-4) && (CounterX<=pos_bolaX+4) && (CounterY>=pos_bolaY-4) && (CounterY<=pos_bolaY+4);
//wire pantalla = border || bola;

wire [9:0] X1 = pos_bolaX;
wire [8:0] Y1 = pos_bolaY;
wire [9:0] X2 = pos_bolaX+99;
wire [8:0] Y2 = pos_bolaY+99;
wire inBounds = (CounterX >= X1) && (CounterX <= X2) && (CounterY >= Y1) && (CounterY <= Y2);
wire kirbydispR = inBounds ? kirbyR[CounterY-Y1][CounterX-X1] : 1'b0;
wire kirbydispG = inBounds ? kirbyG[CounterY-Y1][CounterX-X1] : 1'b0;
wire kirbydispB = inBounds ? kirbyB[CounterY-Y1][CounterX-X1] : 1'b0;

reg [24:0] cont_500ms = 0;
reg [2:0] bolacont = 0;

always @ ( posedge clk )
	begin
		if( pausa ) cont_500ms <= cont_500ms;
		else if( cont_500ms == 25'd24_999_999 ) 
			begin 
				cont_500ms <= 0;
				if( bolacont == 3'b111 ) bolacont <= 3'b001;
				else bolacont <= bolacont + 1'b1;
			end
		else cont_500ms <= cont_500ms + 1'b1;
	end
	
reg [19:0] cont_20ms = 0;
reg [9:0] pos_bolaX = 0;
reg Xdir = 1'b1;
reg [8:0] pos_bolaY = 0;
reg Ydir = 1'b0;

always @ ( posedge clk )
	begin
		if( pausa ) cont_20ms <= cont_20ms;
		else if( cont_20ms == 20'd999_999 ) 
			begin 
				cont_20ms <= 0;
				if( pos_bolaX <= 0 ) Xdir <= 1'b1;
				else if( pos_bolaX == 505 ) Xdir <= 1'b0;
				if(Xdir) pos_bolaX <= pos_bolaX + 1'b1;
				else pos_bolaX <= pos_bolaX - 1'b1;
				if( pos_bolaY <= 0 ) Ydir <= 1'b1;
				else if( pos_bolaY == 372 ) Ydir <= 1'b0;
				if(Ydir) pos_bolaY <= pos_bolaY + 1'b1;
				else pos_bolaY <= pos_bolaY - 1'b1;
			end
		else cont_20ms <= cont_20ms + 1'b1;
	end

always @ ( posedge clk )
	begin
		vga_R <= ((border & bolacont[0]) || kirbydispR) & inDisplayArea;
		vga_G <= ((border & bolacont[1]) || kirbydispG) & inDisplayArea;
		vga_B <= ((border & bolacont[2]) || kirbydispB) & inDisplayArea;
	end
 
endmodule
