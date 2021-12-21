////////////////////////////////////////////////////////////////////////////////
// Company:     Ridotech
// Engineer:    Juan Manuel Rico
// Create Date: 29/03/2020
// Module Name: top.v
//
// Description: Top module from 'pong' game.
//
// Dependencies: 
//
// Revisions: 
//     0.01 - File created.
//
// Additional Comments:
//
////////////////////////////////////////////////////////////////////////////////
module top (
    //input wire CLK,         // System clock (16Mhz).
    input wire clk_50MHz,         // System clock (50MHz).

    input wire UP1,      // Player 1 - Up button.
    input wire DOWN1,      // Player 1 - Down button.
    input wire UP2,      // Player 2 - Up button.
    input wire DOWN2,      // Player 2 - Down button.

    //output wire USBPU,       // USB pull resistor.

    output wire vga_v_sync,     // VGA - VSync.
    output wire vga_h_sync,     // VGA - HSync.
    output wire vga_R,     // VGA - R.
    output wire vga_G,     // VGA - G.
    output wire vga_B,     // VGA - B.

    output wire Rchannel,     // Right channel.
    output wire Lchannel      // Left channel.
);

reg [1:0] cont_16MHz = 0;
reg CLK = 0;
always @ ( posedge clk_50MHz )
	begin
		if( cont_16MHz == 2'd2 )
			begin
				cont_16MHz <= 0;
				CLK <= ~CLK;
			end
		else cont_16MHz <= cont_16MHz + 1'b1;
	end

    // Drive USB pull-up resistor to '0' to disable USB
    //assign USBPU = 0;

    // Module wire conections. 
    wire px_clk;                // Pixel clk.
    wire [22:0] strVGA;         // Stream VGA.
    wire [25:0] strRGB;         // Stream RGB.
    wire endframe;              // End frame signal.
    wire [9:0] pos_ply1;        // Position player 1.
    wire [9:0] pos_ply2;        // Position player 2.
    wire reset;
    wire play;

    // Generated VGA stream module.
    strVGAGen strVGAGen_0 (
        .sys_clk (clk_50MHz),
        .px_clk (px_clk),
        .strVGA (strVGA)
    );

    // Generated VGA endframe module.
    endframeVGA endframeVGA_0 (
        .strVGA(strVGA),
        .endframe(endframe)
    );

    // Control game module.
    ctlButtons ctlButtons_0 (
        .clk (endframe),
        .ply1_up   (UP1),
        .ply1_down (DOWN1),
        .ply2_up   (UP2),
        .ply2_down (DOWN2),
        .pos_ply1 (pos_ply1),
        .pos_ply2 (pos_ply2)
    );

    // Game module.
    pongGame pongGame_0 (
        .px_clk (px_clk),
        .strVGA (strVGA),
        .reset (reset),
        .play (play),
        .snd_clk (CLK),
        .pos_ply1(pos_ply1),
        .pos_ply2(pos_ply2),
        .strRGB (strRGB),
        .right (Rchannel),
        .left (Lchannel)
    );

    // Unzip RGB stream module.
    unzipRGB unzipRGB_0 (
        .strRGB (strRGB),
        .vsync (vga_v_sync),
        .hsync (vga_h_sync),
        .Red (vga_R),
        .Green (vga_G),
        .Blue (vga_B)
    );

endmodule
