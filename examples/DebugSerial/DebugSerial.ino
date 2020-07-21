/*
  Debug Print Example

  This example demonstrates serial prints for 
  debug purposes. Just define DEBUG_VERBOSE 
  or DEBUG_SIMPLE before importing the 
  "DebugUtils.h" library. To disable debug 
  printing simply comment out the define
  statements.

  Copyright (C) 2020 Md Abdullah AL IMRAN
  <iot dot objx at gmail dot com>
*/


#define DEBUG_VERBOSE // Detailed debug print
//#define DEBUG_SIMPLE  // Simple debug print
#include <DebugUtils.h>

int counter = 0;

void setup() {
  Serial.begin(9600); // Must be initialized
  Serial.println("Debug Utilities example loaded...");
}

void loop() {
  // put your main code here, to run repeatedly:
  counter++;
  DEBUG_PRINTLN(counter);
  delay(1000);
}