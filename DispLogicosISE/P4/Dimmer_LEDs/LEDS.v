//////////////////////////////////////////////////////////////////////////////////
module LEDS(
    input PWM,
    output [23:0] LEDS
    );

assign LEDS[23] = PWM,
		LEDS[22] = PWM,
		LEDS[21] = PWM,
		LEDS[20] = PWM,
		LEDS[19] = PWM,
		LEDS[18] = PWM,
		LEDS[17] = PWM,
		LEDS[16] = PWM,
		LEDS[15] = PWM,
		LEDS[14] = PWM,
		LEDS[13] = PWM,
		LEDS[12] = PWM,
		LEDS[11] = PWM,
		LEDS[10] = PWM,
		LEDS[9] = PWM,
		LEDS[8] = PWM,
		LEDS[7] = PWM,
		LEDS[6] = PWM,
		LEDS[5] = PWM,
		LEDS[4] = PWM,
		LEDS[3] = PWM,
		LEDS[2] = PWM,
		LEDS[1] = PWM,
		LEDS[0] = PWM;

endmodule
