Overview
========
The lpuart_interrupt Example project is to demonstrate usage of the KSDK lpuart driver.
In the example, you can send characters to the console back and they will be printed out onto console
 in a group of 8 characters.

Toolchain supported
===================
- IAR embedded Workbench  8.50.9
- GCC ARM Embedded  9.3.1

Hardware requirements
=====================
- Micro USB cable
- VAR-SOM-MX8 STK
- MCIMX8-8X-BB
- J-Link Debug Probe
- 12V power supply
- Personal Computer
- USB to RS232 Convertor

Board settings
==============
Connect USB to RS232 Convertor to J37 (On base board) if there's no RS232 port on your host PC.
For CM4_0, use the serial port provided by J18(On CPU board).
For CM4_1, use the serial port provided by J37(On Base board).

Prepare the Demo
================
1.  Connect 12V power supply and J-Link Debug Probe to the board.
2.  Connect a USB cable between the host PC and the Debug port on the board (Refer "Getting Started with MCUXpresso SDK for i.MX 8QuadMax.pdf" for debug port information).
3.  Open a serial terminal with the following settings:
    - 115200 baud rate
    - 8 data bits
    - No parity
    - One stop bit
    - No flow control
4.  Download the program to the target board (Please refer "Getting Started with MCUXpresso SDK for i.MX 8QuadMax.pdf" for how to run different targets).
5.  Launch the debugger in your IDE to begin running the example.

Running the demo
================
When the demo runs successfully, the log would be seen on the terminal like:

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Lpuart interrupt example
Board receives 8 characters then sends them out
Now please input:
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

When you input 8 characters, system will echo it by LPUART and them would be seen on the terminal.
