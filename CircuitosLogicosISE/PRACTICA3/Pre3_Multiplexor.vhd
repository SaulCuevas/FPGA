--	INSTITUTO POLITECNICO NACIONAL
--					UPIITA
-- AUTORES: SAUL CUEVAS MORALES
--				ALEXIS GONZALEZ ZUNIGA
-- MUX INPUT 8X1 OUTPUT TRI-ESTADO SALIDA A LED ROJO
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity Pre3_Multiplexor is
    Port ( Entrada : in  STD_LOGIC_VECTOR(7 downto 0);
           Sel : in  STD_LOGIC_VECTOR(2 downto 0);
           Enable : in  STD_LOGIC;
           Salida : out  STD_LOGIC;
			  disp : out STD_LOGIC_VECTOR(11 downto 0));
end Pre3_Multiplexor;

architecture Mux of Pre3_Multiplexor is
begin
	process(enable, sel, entrada)
	begin
		if(enable = '1') then salida <= 'Z'; disp <= b"11111111" & b"1111";
		else
			case(sel) is
			when "000" => salida <= entrada(0); disp <= b"01111111" & b"0111";
			when "001" => salida <= entrada(1); disp <= b"10111111" & b"0111";
			when "010" => salida <= entrada(2); disp <= b"11011111" & b"0111";
			when "011" => salida <= entrada(3); disp <= b"11101111" & b"0111";
			when "100" => salida <= entrada(4); disp <= b"11110111" & b"0111";
			when "101" => salida <= entrada(5); disp <= b"11111011" & b"0111";
			when "110" => salida <= entrada(6); disp <= b"11111101" & b"0111";
			when "111" => salida <= entrada(7); disp <= b"11111110" & b"0111";
			when others => salida <= '0'; disp <= b"11111111" & b"1111";
			end case;
		end if;
	end process;
end Mux;