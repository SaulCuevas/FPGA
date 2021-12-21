--	INSTITUTO POLITECNICO NACIONAL
--					UPIITA
-- AUTORES: SAUL CUEVAS MORALES
--				ALEXIS GONZALEZ ZUNIGA
-- SALIDA A DISPLAY (12 BITS) CON ENTRADA DE UN COMPARADOR DE 6 BITS
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity Pre2_Codificador is
    Port ( clk : in STD_LOGIC;
			  comparador : in  STD_LOGIC_VECTOR(5 downto 0); --comparador = '<  =  >  <=  =/=  >='
           disp : out  STD_LOGIC(11 downto 0); --display = 'abcdefgp' + 'a1 a2 a3 a4'
           b1 : in  STD_LOGIC;
           b2 : in  STD_LOGIC;
           b3 : in  STD_LOGIC);
end Pre2_Codificador;

architecture Codificador of Pre2_Codificador is
begin
	process(clk, comparador, b1, b2, b3)
--	variable q : STD_LOGIC_VECTOR(2 downto 0) := b"000"; -- q = contador selector
	begin
--		if(clk and (q=b"111")) then q <= b"000";
--		elsif(clk) then q <= q+1;
--		end if;
		if(b1 and (not b2) and (not b3)) then --boton 1
				if(comparador = b"010101") then -- a=b disp => '='
						wait until clk; disp <= b"11111111" & b"0111";
						wait until clk; disp <= b"11101101" & b"1011";
						wait until clk; disp <= b"11101101" & b"1101";
						wait until clk; disp <= b"11111111" & b"1110";
				else -- a=/=b disp => '=/='
						wait until clk; disp <= b"11111111" & b"0111";
						wait until clk; disp <= b"11011101" & b"1011";
						wait until clk; disp <= b"11111001" & b"1101";
						wait until clk; disp <= b"11111111" & b"1110";
				end if;
		elsif((not b1) and b2 and (not b3)) then --boton 2
				if(comparador = b"100110") then -- a<b disp => '<'
						wait until clk; disp <= b"11100101" & b"0111";
						wait until clk; disp <= b"11111111" & b"1011";
						wait until clk; disp <= b"11111111" & b"1101";
						wait until clk; disp <= b"11111111" & b"1110";
				else -- a>=b disp => '>='
						wait until clk; disp <= b"11111111" & b"0111";
						wait until clk; disp <= b"11111111" & b"1011";
						wait until clk; disp <= b"11111111" & b"1101";
						wait until clk; disp <= b"01001101" & b"1110";
				end if;
		elsif((not b1) and (not b2) and b3) then --boton 3
				if(comparador = b"001011") then --a>b disp => '>='
						wait until clk; disp <= b"11111111" & b"0111";
						wait until clk; disp <= b"11111111" & b"1011";
						wait until clk; disp <= b"11111111" & b"1101";
						wait until clk; disp <= b"11001101" & b"1110";
				else --a<=b => '<='
						wait until clk; disp <= b"01100101" & b"0111";
						wait until clk; disp <= b"11111111" & b"1011";
						wait until clk; disp <= b"11111111" & b"1101";
						wait until clk; disp <= b"11111111" & b"1110";
				end if;
		else disp <= b"11111111" & b"0000";
		end if;
	end process;
end Codificador;