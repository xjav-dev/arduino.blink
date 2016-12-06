/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  by Scott Fitzgerald
 */

#include "Arduino.h"

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(500);              // wait for a second
}
