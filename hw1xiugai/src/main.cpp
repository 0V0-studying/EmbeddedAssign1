#include <Arduino.h>

int pin_list[3]={13,12,14};

void setup() {
  // put your setup code here, to run once:
  for(int i=0; i<3; i++){
    pinMode(pin_list[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<3;i++){
    digitalWrite(pin_list[i],HIGH);
    delay(50);
  }
  for(int i=0;i<3;i++){
    digitalWrite(pin_list[i],LOW);
    delay(50);
  }
}