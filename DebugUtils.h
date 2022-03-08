
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

#include <Arduino.h>

#ifndef DEBUG_PORT
#define DEBUG_PORT Serial
#endif

#ifdef DEBUG_VERBOSE
#define DEBUG_PRINTLN(str)    \
  DEBUG_PORT.print(millis());     \
  DEBUG_PORT.print(": ");    \
  DEBUG_PORT.print(__PRETTY_FUNCTION__); \
  DEBUG_PORT.print(' ');      \
  DEBUG_PORT.print(__FILE__);     \
  DEBUG_PORT.print(':');      \
  DEBUG_PORT.print(__LINE__);     \
  DEBUG_PORT.print(' ');      \
  DEBUG_PORT.println(str);
#define DEBUG_FLUSH() \
  DEBUG_PORT.flush();
#elif defined(DEBUG_SIMPLE)
#define DEBUG_PRINT(str) \
  DEBUG_PORT.print(str);
#define DEBUG_PRINTLN(str) \
  DEBUG_PORT.println(str);
#define DEBUG_FLUSH() \
  DEBUG_PORT.flush();
#else
#define DEBUG_PRINT(str) {}
#define DEBUG_PRINTLN(str) {}
#define DEBUG_FLUSH() {}
#endif

#endif
