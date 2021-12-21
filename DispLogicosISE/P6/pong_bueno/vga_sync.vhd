library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity vga_sync is
Port ( clock_25MHz : in STD_LOGIC;
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
end vga_sync;

architecture Behavioral of vga_sync is

signal h_cnt, v_cnt: STD_LOGIC_VECTOR (9 DOWNTO 0);

begin

sync_pr: process
	variable video_on: STD_LOGIC;

begin

wait until rising_edge(clock_25MHz);
-- Genera Señales de sincronización Horizontal para la señal de video
-- h_cnt cuenta los pixels a través de lineas (800 en total = 640 activos + extras
-- para sync y blanquear)
-- Imagen active para 0 <= h_cnt <= 639
-- Hsync para 659 <= h_cnt <= 755
	if h_cnt >= 799 then
		h_cnt <= "0000000000";
	else
		h_cnt <= h_cnt+1;
	end if;
	
	if (h_cnt >= 659) and (h_cnt <= 755) then
		hsync <= '0';
	else
		hsync <= '1';
	end if;
-- Genera Señales de sincronización Vertical para la señal de video
-- v_cnt cuenta las líneas hacia debajo de la pantalla (525 total = 480 activas + extras
-- para sync y blanqueamiento)
-- Imagen active para 0 <= v_cnt <= 479
-- Vsync para 493 <= h_cnt <= 494
	if (v_cnt >= 524) and (h_cnt = 699) then
		v_cnt <= "0000000000";
	elsif h_cnt = 699 then
		v_cnt <= v_cnt+1;
	end if;
	
	if (v_cnt >= 493) and (v_cnt <= 494) then
		vsync <= '0';
	else
		vsync <= '1';
	end if;
-- Genera las señales de video y la dirección de los pixeles
	if (h_cnt <= 639) and (v_cnt <= 479) then
		video_on := '1'; else
		video_on := '0';
	end if;

pixel_col <= h_cnt;
pixel_row <= v_cnt;

-- Registra el video al borde del reloj y suprime el video durante el period de
-- blanqueamiento o borrado y sincronización
red_out <= red and video_on;
green_out <= green and video_on;
blue_out <= blue and video_on;

end process;

end Behavioral;
