Overview
========

The RDC example shows how to control the peripheral and memory region
asscess policy using RDC and RDC_SEMA42

Toolchain supported
===================
- IAR embedded Workbench  8.50.6
- GCC ARM Embedded  9.2.1

Hardware requirements
=====================
- Micro USB cable
- VAR-SOM-MX8MQ-PLUS SoM
- J-Link Debug Probe
- 12V power supply
- Personal Computer

Board settings
==============
No special settings are required.

Prepare the Demo
================
1.  Connect proper power supply and J-Link Debug Probe to the board, switch SW8 to power on the board
2.  Connect a USB cable between the host PC and the J23 USB port on the target board.
3.  Open a serial terminal with the following settings:
    - 115200 baud rate
    - 8 data bits
    - No parity
    - One stop bit
    - No flow control
4.  Download the program to the target board.
5.  Launch the debugger in your IDE to begin running the demo.

Running the demo
================
The log below is shown in the terminal window:
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
RDC Example:
RDC Peripheral access control
RDC Peripheral access control with SEMA42
RDC memory region access control

RDC Example Success
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
