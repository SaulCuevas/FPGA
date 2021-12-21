--
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity Pre1_Comparador is
generic(n: integer:=4); --n es el nmero de bits de a y b
port(
		a,b: in std_logic_vector(n-1 downto 0);
		resultado: out std_logic_vector(5 downto 0)); --resultado = menor, igual, mayor, menig, desig, mayig
end Pre1_Comparador;

architecture Comparador of Pre1_Comparador is
begin
	process(a,b)
	begin
		if(a = b) then resultado <= b"010101";
		elsif(a > b) then resultado <= b"001011";
		elsif(a < b) then resultado <= b"100110";
		else resultado <= (others => '0');
		end if;
	end process;
end Comparador;