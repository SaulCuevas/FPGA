--	INSTITUTO POLITECNICO NACIONAL
--					UPIITA
-- AUTORES: SAUL CUEVAS MORALES
--				ALEXIS GONZALEZ ZUNIGA
-- DEMUX INPUT 1X8 OUTPUT TRI-ESTADO SALIDA A LEDS
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity Pre4_Demultiplexor is
    Port ( Entrada : in  STD_LOGIC;
           Sel : in  STD_LOGIC_VECTOR(2 downto 0);
           Enable : in  STD_LOGIC;
           Salida : out  STD_LOGIC_VECTOR(7 downto 0);
			  disp : out STD_LOGIC_VECTOR(11 downto 0));
end Pre4_Demultiplexor;

architecture Demux of Pre4_Demultiplexor is
begin
	process(enable, sel, entrada)
	begin
		if(enable = '1') then salida <= (others => 'Z'); disp <= b"11111111" & b"1111";
		else
			case(sel) is
			when "000" => salida(0) <= entrada; disp <= b"01111111" & b"0111";
			when "001" => salida(1) <= entrada; disp <= b"10111111" & b"0111";
			when "010" => salida(2) <= entrada; disp <= b"11011111" & b"0111";
			when "011" => salida(3) <= entrada; disp <= b"11101111" & b"0111";
			when "100" => salida(4) <= entrada; disp <= b"11110111" & b"0111";
			when "101" => salida(5) <= entrada; disp <= b"11111011" & b"0111";
			when "110" => salida(6) <= entrada; disp <= b"11111101" & b"0111";
			when "111" => salida(7) <= entrada; disp <= b"11111110" & b"0111";
			when others => salida <= (others => '0'); disp <= b"11111111" & b"1111";
			end case;
		end if;
	end process;
end Demux;