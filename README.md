NixieDisplay
============

Nixie Display to plug on Arduino Mega

Simple code to display numbers on IN-12 Nixie tubes driven by the 74141 IC (BCD-to-decimal decoder).

There is only one function 'nixiePrint' that receives an array of pin numbers representing the pins connected to ABCD
of the IC and the number (single digit) that you want to display.

Exemple:

int nixie0[4] = {50, 51, 52, 53};  // Arduino Mega pins for ABCD.
nixiePrint(nixie0, 5);   // Display the number 5.
