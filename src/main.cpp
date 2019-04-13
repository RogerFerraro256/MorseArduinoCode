#include <Arduino.h>

char stringToCode[] = "etetetetetet";

int buzzer= 11;
int dot= 100;
int dash= dot*3;
int letterpause = 100;
int space = dot*3;
int wordPause = dot*7;



void morseDot(){
  digitalWrite(buzzer,HIGH);
  delay(dot);
}

void morseDash(){
  digitalWrite(buzzer,HIGH);
  delay(dash);
}

void off(int delayTime){
  digitalWrite(buzzer,LOW);
  delay(delayTime);
}

void letters(char tmpChar){
  switch (tmpChar)
  {
  case 'a':
    morseDot();
    off(letterpause);
    morseDash();
    off(letterpause);
    break;
  case 'b':
    morseDash();
    off(letterpause);
    morseDot();
    off(letterpause);
    morseDot();
    off(letterpause);
    morseDot();
    off(letterpause);
    break;
  case 'c':
    morseDash();
    off(letterpause);
    morseDot();
    off(letterpause);
    morseDash();
    off(letterpause);
    morseDot();
    off(letterpause);
    break;
  case 'd':
    morseDash();
    off(letterpause);
    morseDot();
    off(letterpause);
    morseDot();
    off(letterpause);
    break;
  case 'e':
    morseDot();
    off(letterpause);
    break;
  case 'f':
    morseDot();
    off(letterpause);
    morseDot();
    off(letterpause);
    morseDash();
    off(letterpause);
    morseDot();
    off(letterpause);
    break;
  case 'g':
    morseDash();
    off(letterpause);
    morseDash();
    off(letterpause);
    morseDot();
    off(letterpause);
    break;
  case 'h':
    morseDot();
    off(letterpause);
    morseDot();
    off(letterpause);
    morseDot();
    off(letterpause);
    morseDot();
    off(letterpause);
    break;
  case 'i':
    morseDot();
    off(letterpause);
    morseDot();
    off(letterpause);
    break;
  case 'j':
    morseDot();
    off(letterpause);
    morseDash();
    off(letterpause);
    morseDash();
    off(letterpause);
    morseDash();
    off(letterpause);
    break;
  case 'k':
    morseDash();
    off(letterpause);
    morseDot();
    off(letterpause);
    morseDash();
    off(letterpause);
    break;
  case 'l':
    morseDot();
    off(letterpause);
    morseDash();
    off(letterpause);
    morseDot();
    off(letterpause);
    morseDot();
    off(letterpause);
    break;
  case 'm':
    morseDash();
    off(letterpause);
    morseDash();
    off(letterpause);
    break;
  case 'n':
    morseDash();
    off(letterpause);
    morseDot();
    off(letterpause);
    break;
  case 'o':
    morseDash();
    off(letterpause);
    morseDash();
    off(letterpause);
    morseDash();
    off(letterpause);
    break;
  case 'p':
    morseDot();
    off(letterpause);
    morseDash();
    off(letterpause);
    morseDash();
    off(letterpause);
    morseDot();
    off(letterpause);
    break;
  case 'q':
    morseDash();
    off(letterpause);
    morseDash();
    off(letterpause);
    morseDot();
    off(letterpause);
    morseDash();
    off(letterpause);
    break;
  case 'r':
    morseDot();
    off(letterpause);
    morseDash();
    off(letterpause);
    morseDot();
    off(letterpause);
    break;
  case 's':
    morseDot();
    off(letterpause);
    morseDot();
    off(letterpause);
    morseDot();
    off(letterpause);
    break;
  case 't':
    morseDash();
    off(letterpause);
    break;
  case 'u':
    morseDot();
    off(letterpause);
    morseDot();
    off(letterpause);
    morseDash();
    off(letterpause);
    
    break;
  case 'v':
    morseDot();
    off(letterpause);
    morseDot();
    off(letterpause);
    morseDot();
    off(letterpause);
    morseDash();
    off(letterpause);
    
    break;
  case 'w':
    morseDot();
    off(letterpause);
    morseDash();
    off(letterpause);
    morseDash();
    off(letterpause);
    
    break;
  case 'x':
    morseDash();
    off(letterpause);
    morseDot();
    off(letterpause);
    morseDot();
    off(letterpause);
    morseDash();
    off(letterpause);
    
    break;
  case 'y':
    morseDash();
    off(letterpause);
    morseDot();
    off(letterpause);
    morseDash();
    off(letterpause);
    morseDash();
    off(letterpause);
    
    break;
  case 'z':
    morseDash();
    off(letterpause);
    morseDash();
    off(letterpause);
    morseDot();
    off(letterpause);
    morseDot();
    off(letterpause);
    
    break;
  case '1':

    break;
  case '2':

    break;
  case '3':

    break;
  case '4':

    break;
  case '5':

    break;
  case '6':

    break;
  case '7':

    break;
  case '8':

    break;
  case '9':

    break;
  case '0':

    break;
    
        
  default:
    off(space);
    break;
  }
}

void setup() {
  pinMode(buzzer,OUTPUT);
}

void loop() {
  for (int i = 0; i < sizeof(stringToCode)-1; i++)
  {
    char tmpChar=stringToCode[i];
    tmpChar=toLowerCase(tmpChar);
    letters(tmpChar);
  }

  off(8000);
  
}