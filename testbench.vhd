--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:47:31 11/25/2022
-- Design Name:   
-- Module Name:   F:/Edu/FPGA/alireza_project/RTC6701_spi_controller/testbench.vhd
-- Project Name:  RTC6701_spi_controller
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: SPI_controller
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- unsigned for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
USE ieee.numeric_std.ALL;
 
ENTITY testbench IS
END testbench;
 
ARCHITECTURE behavior OF testbench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT SPI_controller
    PORT(
         send : IN  std_logic;
         clock : IN  std_logic;
         data_in : IN  unsigned(31 downto 0);
         MISO : IN  std_logic;
         force_cs : IN  std_logic;
         command_type : IN  unsigned(1 downto 0);
         data_out : OUT  unsigned(7 downto 0);
         CS : OUT  std_logic;
         MOSI : OUT  std_logic;
         SClK : OUT  std_logic;
         busy : OUT  std_logic;
         data_out_valid : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal send : std_logic := '0';
   signal clock : std_logic := '0';
   signal data_in : unsigned(31 downto 0) := (others => '0');
   signal MISO : std_logic := '0';
   signal force_cs : std_logic := '0';
   signal command_type : unsigned(1 downto 0) := (others => '0');

 	--Outputs
   signal data_out : unsigned(7 downto 0);
   signal CS : std_logic;
   signal MOSI : std_logic;
   signal SClK : std_logic;
   signal busy : std_logic;
   signal data_out_valid : std_logic;

   -- Clock period definitions
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: SPI_controller PORT MAP (
          send => send,
          clock => clock,
          data_in => data_in,
          MISO => MISO,
          force_cs => force_cs,
          command_type => command_type,
          data_out => data_out,
          CS => CS,
          MOSI => MOSI,
          SClK => SClK,
          busy => busy,
          data_out_valid => data_out_valid
        );

   -- Clock process definitions
   clock_process :process
   begin
		clock <= '0';
		wait for clock_period/2;
		clock <= '1';
		wait for clock_period/2;
   end process;
 

 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clock_period*10;
		command_type	<= "10";
		send 				<= '1';
		force_cs 		<= '1';
		data_in			<= "10101010101010101010101010101010";

      -- insert stimulus here 

      wait;
   end process;

END;
