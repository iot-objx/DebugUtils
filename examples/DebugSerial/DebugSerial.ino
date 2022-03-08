/*
  Debug Print Example

  This example demonstrates serial prints for 
  debug purposes. Just define DEBUG_VERBOSE 
  or DEBUG_SIMPLE before importing the 
  "DebugUtils.h" library. To disable debug 
  printing simply comment out the define
  statements.

  Copyright (C) 2022 Md Abdullah AL IMRAN
  <iot dot objx at gmail dot com>
*/

// #define DEBUG_PORT Serial // Select a Debug port e.g. Serial [default], Serial1, Serial2, Serial3.
#define DEBUG_VERBOSE // Detailed debug print
//#define DEBUG_SIMPLE  // Simple debug print

#include <DebugUtils.h>

int counter = 0;

void setup() {
  DEBUG_PORT.begin(115200); // Must be initialized
  DEBUG_PRINTLN("Debug Utilities example loaded...");
  delay(100);
  DEBUG_FLUSH();
}

void loop() {
  // put your main code here, to run repeatedly:
  counter++;
  DEBUG_PRINTLN(counter);
  delay(1000);
}