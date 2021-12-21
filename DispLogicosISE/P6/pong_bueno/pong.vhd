library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
entity pong is
port ( clk_50MHz : in STD_LOGIC; -- reloj de 50MHz
	VGA_red : out STD_LOGIC_VECTOR (2 downto 0); -- Salidas VGA
	VGA_green : out STD_LOGIC_VECTOR (2 downto 0);
	VGA_blue : out STD_LOGIC_VECTOR (1 downto 0);
	VGA_hsync : out STD_LOGIC;
	VGA_vsync : out STD_LOGIC;
	desactivado : in STD_LOGIC;
	desactivado2 : in STD_LOGIC;
	btn0 : in STD_LOGIC); -- botón para iniciar animación
end pong;

architecture Behavioral of pong is
-- señal de reloj de 25MHz para el módulo VGA
signal ck_25: STD_LOGIC := '0';
-- señales auxiliaries para la conexión entre módulos
signal S_red, S_green, S_blue: STD_LOGIC;
signal S_vsync: STD_LOGIC;
signal S_pixel_row, S_pixel_col: STD_LOGIC_VECTOR (9 downto 0);
signal batpos: STD_LOGIC_VECTOR (9 downto 0);
signal serial_clk, sample_clk: STD_LOGIC;
signal adout: STD_LOGIC_VECTOR (11 downto 0);

component bat_n_ball is
port ( v_sync : in STD_LOGIC;
	desactivado : in STD_LOGIC;
	desactivado2 : in STD_LOGIC;
	pixel_row : in STD_LOGIC_VECTOR(9 downto 0);
	pixel_col : in STD_LOGIC_VECTOR(9 downto 0);
	serve : in STD_LOGIC;
	red : out STD_LOGIC;
	green : out STD_LOGIC;
	blue : out STD_LOGIC);
end component;

component vga_sync is
port ( clock_25MHz : in STD_LOGIC;
	red : in STD_LOGIC;
	green : in STD_LOGIC;
	blue : in STD_LOGIC;
	red_out : out STD_LOGIC;
	green_out : out STD_LOGIC;
	blue_out : out STD_LOGIC;
	hsync : out STD_LOGIC;
	vsync : out STD_LOGIC;
	pixel_row : out STD_LOGIC_VECTOR (9 downto 0);
	pixel_col : out STD_LOGIC_VECTOR (9 downto 0));
end component;

begin

-- Proceso para generar las señales de reloj
ckp: process
begin
	wait until rising_edge(clk_50MHz);
	ck_25 <= not ck_25; -- reloj de 25MHz para los módulos VGA
end process;

-- ponemos a los bits menos significativos del video VGA '0'
VGA_red(1 downto 0) <= "00";
VGA_green(1 downto 0) <= "00";
VGA_blue(0) <= '0';

--instancia bat_n_ball encargada del movimiento de la pelota
add_bb: bat_n_ball port map(
	v_sync => S_vsync,
	desactivado => desactivado,
	desactivado2 => desactivado2,
	pixel_row => S_pixel_row,
	pixel_col => S_pixel_col,
	serve => btn0,
	red => S_red,
	green => S_green,
	blue => S_blue);

--instancia vga_sync
vga_driver: vga_sync port map(
	clock_25MHz => ck_25,
	red => S_red,
	green => S_green,
	blue => S_blue,
	red_out => VGA_red(2),
	green_out => VGA_green(2),
	blue_out => VGA_blue(1),
	pixel_row => S_pixel_row,
	pixel_col => S_pixel_col,
	hsync => VGA_hsync,
	vsync => S_vsync);
	
VGA_vsync <= S_vsync; --conecta la salida

end Behavioral;
