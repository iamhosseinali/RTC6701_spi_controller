----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:11:59 11/25/2022 
-- Design Name: 
-- Module Name:    top - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity top is
    Port ( 
      
            Clock    : in  STD_LOGIC;
            mosi     : out  STD_LOGIC;
            send     : in  STD_LOGIC;
            cs       : out  STD_LOGIC;
            USER_LED : out  STD_LOGIC;
            sck      : out  STD_LOGIC
            
         );
end top;

architecture Behavioral of top is

   signal clk1          :std_logic:= '0';
   signal done          :std_logic:= '0';
   signal busy          :std_logic := '0';
   signal busy_pre      :std_logic := '0';
   signal USER_LED_int  :std_logic := '0';
   signal clock_counter :unsigned(25 downto 0):= (others=> '0');

   signal	key_pushed			      :	std_logic						:=	'0';
   signal	key_pushed_int			   :	std_logic						:=	'0';
   signal	Push_Button_Int			:	std_logic						:=	'0';
	signal	Push_Button_Prev			:	std_logic						:=	'0';
	signal	Debounce_State				:	std_logic						:=	'0';
	signal	Seven_Segment_Int			:	unsigned	(7 downto 0)		:=	(others=>'0');
	signal	Debounce_Counter			:	unsigned	(25 downto 0)		:=	(others=>'1');



         --- RTC6701 intruction signals --- 
   signal not_used      :unsigned(10 downto 0):= (others=> '0');
   signal VCOSC         :unsigned(1 downto 0):= "10";
   signal ACP           :unsigned(1 downto 0):= "00";
   signal Address       :unsigned(1 downto 0):= "11";
   signal Audio_Div     :unsigned(4 downto 0):= "01001";
   signal power_down    :std_logic := '1';

   component dcm
port
 (-- Clock in ports
  Clock           : in     std_logic;
  -- Clock out ports
  CLK1          : out    std_logic
 );
end component;

begin



   dcm_module : dcm
  port map
   (-- Clock in ports
    Clock => Clock,
    -- Clock out ports
    CLK1 => CLK1
    
    );

   
	SPI_controller_module: entity work.SPI_controller 
   
   PORT MAP
   (
		send           => key_pushed,
		clock          => clk1,
		data_in        => "00000000" & not_used & VCOSC & power_down & Audio_Div & '0' & ACP & Address,
		MISO           => '0',
		force_cs       => '0',
		command_type   => "10",
		data_out       => open,
		CS             => cs,
		MOSI           => mosi,
		SClK           => sck,
		busy           => busy,
		data_out_valid => open 
	);

   USER_LED <= USER_LED_int; 

   process(CLK1)
   begin
      if rising_edge(CLK1) then

         

         Push_Button_Int			<=	send;
			Push_Button_Prev			<=	Push_Button_Int;
			Debounce_State				<=	'0';
         key_pushed              <= '0'; 
			
			if (Push_Button_Int = '0' and Push_Button_Prev = '1' and Debounce_State = '0') then
			
				Debounce_State			<=	'1';
				Debounce_Counter		<=	(others=>'0');
            key_pushed           <= '1';
				
			end if;

			if (Push_Button_Int = '1' and Push_Button_Prev = '0' and Debounce_State = '0') then

				Debounce_State			<=	'1';
				Debounce_Counter		<=	(others=>'0');

			
			end if;
			
			if (Debounce_Counter < to_unsigned(1000,26)) then
			
				Debounce_Counter		<=	Debounce_Counter + 1;
				Debounce_State			<=	'1';
			
			end if;


         clock_counter     <= clock_counter +1;
         busy_pre          <= busy; 
         if (busy = '0' and busy_pre = '1') then 
            done       <= '1';
            clock_counter     <= (others => '0');
            end if;
         if (done = '1') then 
            USER_LED_int      <= clock_counter(15);
            if (clock_counter(19) = '1') then
               clock_counter     <= (others => '0');
               done     <= '0';
            end if;
         end if;
            
         
            
      end if; 
   end process; 



end Behavioral;

