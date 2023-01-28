--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:49:01 11/25/2022
-- Design Name:   
-- Module Name:   F:/Edu/FPGA/alireza_project/RTC6701_spi_controller/tb.vhd
-- Project Name:  RTC6701_spi_controller
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: top
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb IS
END tb;
 
ARCHITECTURE behavior OF tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT top
    PORT(
         Clock : IN  std_logic;
         mosi : OUT  std_logic;
         send : IN  std_logic;
         cs : OUT  std_logic;
         USER_LED : OUT  std_logic;
         sck : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Clock : std_logic := '0';
   signal send : std_logic := '0';

 	--Outputs
   signal mosi : std_logic;
   signal cs : std_logic;
   signal USER_LED : std_logic;
   signal sck : std_logic;

   -- Clock period definitions
   constant Clock_period : time := 41.6 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: top PORT MAP (
          Clock => Clock,
          mosi => mosi,
          send => send,
          cs => cs,
          USER_LED => USER_LED,
          sck => sck
        );

   -- Clock process definitions
   Clock_process :process
   begin
		Clock <= '0';
		wait for Clock_period/2;
		Clock <= '1';
		wait for Clock_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.

      wait for 1 ms;

      -- insert stimulus here
			send		<= '1';
      wait for 1 ms;
			send		<= '0';
		wait for 1 ms;
			send		<= '1';
		wait for 1 ms;
			send		<= '0';
		wait for 1 ms;
			send		<= '1';
		


			

      wait;
   end process;

END;
