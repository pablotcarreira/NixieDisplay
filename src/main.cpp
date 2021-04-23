#include <Arduino.h>


// Definição dos pinos para 4 displays.
int nixie0[4] = {50, 51, 52, 53};
int nixie1[4] = {46, 47, 48, 49};
int nixie2[4] = {42, 43, 44, 45};
int nixie3[4] = {38, 39, 40, 41};
// LED do Arduino.
const int ledPin =  13; 

int  pinoA;
int  pinoB;
int  pinoC;
int  pinoD;
const int  tempo = 100;

// Variables will change:
int ledState = LOW;             // ledState used to set the LED
long previousMillis = 0;        // will store last time LED was updated

// the follow variables is a long because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long interval = 1000;           // interval at which to blink (milliseconds)


void setup() {
  pinMode(ledPin, OUTPUT);
  nixiePrint(nixie0, 0);
  nixiePrint(nixie1, 0);
  nixiePrint(nixie2, 0);
  nixiePrint(nixie3, 0);
}

void loop() {
  int n0;
  int n1;
  int n2;
  int n3;
  for (n3 = 0; n3 <= 9; n3++){
    nixiePrint(nixie3, n3);  
    for (n2 = 0; n2 <= 9; n2++){
      nixiePrint(nixie2, n2);  
      for (n1 = 0; n1 <= 9; n1++){
        nixiePrint(nixie1, n1);  
        for (n0 = 0; n0 <= 9; n0++){
          nixiePrint(nixie0, n0);  
          delay(tempo);  
        }
      }
    }
  }
  
}

void nixiePrint(int pinos[4], int numero){
  pinoA = pinos[0];
  pinoB = pinos[1];
  pinoC = pinos[2];
  pinoD = pinos[3];
  //Setup, mover para cima depois.
  pinMode(pinoA, OUTPUT);
  pinMode(pinoB, OUTPUT);
  pinMode(pinoC, OUTPUT);
  pinMode(pinoD, OUTPUT);    
  
  switch (numero){
    case 0:
     digitalWrite(pinoD, LOW);    
     digitalWrite(pinoC, LOW);
     digitalWrite(pinoB, LOW);
     digitalWrite(pinoA, LOW);
    break;
    case 1:
     digitalWrite(pinoD, LOW);    
     digitalWrite(pinoC, LOW);
     digitalWrite(pinoB, LOW);
     digitalWrite(pinoA, HIGH);
    break;
    case 2:
     digitalWrite(pinoD, LOW);    
     digitalWrite(pinoC, LOW);
     digitalWrite(pinoB, HIGH);
     digitalWrite(pinoA, LOW);
    break;
    case 3:
     digitalWrite(pinoD, LOW);    
     digitalWrite(pinoC, LOW);
     digitalWrite(pinoB, HIGH);
     digitalWrite(pinoA, HIGH);
    break;
    case 4:
     digitalWrite(pinoD, LOW);    
     digitalWrite(pinoC, HIGH);
     digitalWrite(pinoB, LOW);
     digitalWrite(pinoA, LOW);
    break;
    case 5:
     digitalWrite(pinoD, LOW);    
     digitalWrite(pinoC, HIGH);
     digitalWrite(pinoB, LOW);
     digitalWrite(pinoA, HIGH);
    break;
    case 6:
     digitalWrite(pinoD, LOW);    
     digitalWrite(pinoC, HIGH);
     digitalWrite(pinoB, HIGH);
     digitalWrite(pinoA, LOW);
    break;
    case 7:
     digitalWrite(pinoD, LOW);    
     digitalWrite(pinoC, HIGH);
     digitalWrite(pinoB, HIGH);
     digitalWrite(pinoA, HIGH);
    break;
    case 8:
     digitalWrite(pinoD, HIGH);    
     digitalWrite(pinoC, LOW);
     digitalWrite(pinoB, LOW);
     digitalWrite(pinoA, LOW);
    break;
    case 9:
     digitalWrite(pinoD, HIGH);    
     digitalWrite(pinoC, LOW);
     digitalWrite(pinoB, LOW);
     digitalWrite(pinoA, HIGH);
    break;
  }
}