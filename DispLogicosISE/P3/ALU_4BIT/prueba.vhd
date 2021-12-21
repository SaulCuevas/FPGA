library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;

entity prueba is
    Port ( A : in  STD_LOGIC_VECTOR(3 downto 0);
           B : in  STD_LOGIC_VECTOR(3 downto 0);
           C : out  STD_LOGIC_VECTOR(3 downto 0));
end prueba;

architecture Behavioral of prueba is
begin
	process(A,B)
	variable q : STD_LOGIC_VECTOR(3 downto 0);
	variable res : STD_LOGIC_VECTOR(3 downto 0);
	variable I: integer range 0 to 15;
	begin
		q := x"0";
		res := A-B;
		C <= x"0";
		if(A>=B) then
			q := x"1";
			for i in 1 to 15 loop
				if(res>=B) then
					res := res - B;
					q := q + 1; 
				else C <= q;
				end if;
			end loop;
		else C <= x"0";
		end if;
	end process;
end Behavioral;

