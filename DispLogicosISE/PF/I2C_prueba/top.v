//////////////////////////////////////////////////////////////////////////////////
module top(
    input clk, // system clock
	 //input reset_n, // active low reset
	 input ena, // latch in command
	 input rw, // '0' is write, '1' is read
	 input [7:0] data_wr, // data to write to slave
	 output busy, // indicates transaction in progress
	 output [7:0] data_rd, // data read from slave
	 output ack_error, // flag if improper acknowledge from slave
	 inout sda,
	 inout scl
    );
parameter reset_n = 1'b1;
parameter addr = 7'b1001000;

// Muestra los datos en el display
i2c_master I2C(
 .clk(clk),
 .reset_n(reset_n),
 .ena(ena),
 .addr(addr),
 .rw(rw),
 .data_wr(data_wr),
 .busy(busy),
 .data_rd(data_rd),
 .ack_error(ack_error),
 .sda(sda),
 .scl(scl)
); 

endmodule
