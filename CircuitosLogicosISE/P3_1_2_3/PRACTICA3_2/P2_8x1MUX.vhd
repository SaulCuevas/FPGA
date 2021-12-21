--	INSTITUTO POLITECNICO NACIONAL
--					UPIITA
-- AUTORES: SAUL CUEVAS MORALES
--				ALEXIS GONZALEZ ZUNIGA
-- MUX INPUT 8X1 OUTPUT TRI-ESTADO SALIDA A LED ROJO
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;

entity P2_8x1MUX is
    Port ( clk : in STD_LOGIC;
			  Entrada : in  STD_LOGIC_VECTOR(7 downto 0);
           Sel : in  STD_LOGIC_VECTOR(2 downto 0);
           Enable : in  STD_LOGIC;
           Salida : out  STD_LOGIC;
			  disp : out STD_LOGIC_VECTOR(11 downto 0));
end P2_8x1MUX;

architecture Mux of P2_8x1MUX is
signal contador 		: STD_LOGIC_VECTOR(18 downto 0) := (others => '0');
signal contador_disp	: STD_LOGIC_VECTOR(1 downto 0);
begin

	process(clk, contador)
	begin 
		--if(contador=524288) then contador <= (others => '0'); --524288 = 2^19 = llega al valor maximo del contador
		if(rising_edge(clk)) then contador <= contador + 1;
		else contador <= contador;
		end if;
	end process;
contador_disp <= contador(18 downto 17); --~~95.37Hz

	process(enable, sel, entrada, contador_disp)
	begin
		if(enable = '1') then salida <= 'Z'; disp <= b"11111111" & b"1111";
		elsif(contador_disp = "00") then
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
		else salida <= '0'; disp <= b"11111111" & b"1111";
		end if;
	end process;
end Mux;

