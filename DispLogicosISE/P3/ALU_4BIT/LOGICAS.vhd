-- INSTITUTO POLITECNICO NACIONAL
-- 				UPIITA
-- AUTORES: SAUL CUEVAS MORALES
-- 			ALEXIS GONZALEZ ZUNIGA
-- SUMADOR/RESTADOR DE 4 BITS (U3)
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity LOGICAS is
    Port ( A : in  STD_LOGIC_VECTOR(3 DOWNTO 0);
           B : in  STD_LOGIC_VECTOR(3 DOWNTO 0);
           C : out  STD_LOGIC_VECTOR(3 DOWNTO 0);
           SEL : in  STD_LOGIC_VECTOR(2 DOWNTO 0));
end LOGICAS;

architecture A_LOGICAS of LOGICAS is
begin
	process(A,B,SEL)
	begin
		case SEL is --SELECTOR EN CODIGO GRAY
			when "110" => C <= NOT A; -- NOTA
			when "111" => C <= A AND B; -- AND
			when "101" => C <= A OR B; -- OR
			when "100" => C <= A XOR B; -- XOR
			when others => c <= (others => '0');
		end case;
	end process;
end A_LOGICAS;