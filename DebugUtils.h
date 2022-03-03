
/*
  DebugUtils.h - Simple debugging utilities.
  Copyright (C) 2022 Md Abdullah AL IMRAN
  <iot dot objx at gmail dot com>

  _________
 /_  ___   \
/@ \/@  \   \
\__/\___/   /
 \_\/______/
 /     /\\\\\ 
|     |\\\\\\ 
 \      \\\\\\\ 
   \______/\\\\\
    _||_||_
                        
*/

#ifndef DEBUGUTILS_H
#define DEBUGUTILS_H

//#include <Arduino.h>

#ifdef DEBUG_VERBOSE
#define DEBUG_PRINTLN(str)    \
  Serial.print(millis());     \
  Serial.print(": ");    \
  Serial.print(__PRETTY_FUNCTION__); \
  Serial.print(' ');      \
  Serial.print(__FILE__);     \
  Serial.print(':');      \
  Serial.print(__LINE__);     \
  Serial.print(' ');      \
  Serial.println(str);
#define DEBUG_FLUSH() \
  Serial.flush();
#elif defined(DEBUG_SIMPLE)
#define DEBUG_PRINT(str) \
  Serial.print(str);
#define DEBUG_PRINTLN(str) \
  Serial.println(str);
#define DEBUG_FLUSH() \
  Serial.flush();
#else
#define DEBUG_PRINT(str) {}
#define DEBUG_PRINTLN(str) {}
#define DEBUG_FLUSH() {}
#endif

#endif
