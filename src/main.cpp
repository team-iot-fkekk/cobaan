#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(6,HIGH); // turn ON LED
  delay(1000);          // delay 1s
  digitalWrite(6,LOW);  // turn OFF LED
  delay(1000);          // delay 1s
}