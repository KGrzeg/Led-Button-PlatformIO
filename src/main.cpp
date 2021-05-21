#include <Arduino.h>

void setup() {
  Serial.begin(9600);

  pinMode(GPIO_NUM_23, OUTPUT);
  pinMode(GPIO_NUM_22, INPUT);
}

void loop() {
  auto s = digitalRead(GPIO_NUM_22);
  Serial.println(s);
  
  digitalWrite(GPIO_NUM_23, s);
  delay(10);
}
