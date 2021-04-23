#include <Arduino.h>
#include "funcoes.h"

void nixiePrint(int pinos[4], int numero){
  int pinoA = pinos[0];
  int pinoB = pinos[1];
  int pinoC = pinos[2];
  int pinoD = pinos[3];
  
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


void configurarPinos(int pinos[4]) 
{
  pinMode(pinos[0], OUTPUT);
  pinMode(pinos[1], OUTPUT);
  pinMode(pinos[2], OUTPUT);
  pinMode(pinos[3], OUTPUT);  
}
