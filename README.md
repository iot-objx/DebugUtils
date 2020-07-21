# DebugUtils
This is a library for Arduino platform to help debug during the code development. The basic idea was that during the development phase you use extensive amount of `Serial.print`s to debug and/or output system status at specific points. After the finalization of the code, it becomes difficult to comment out or remove those print statement. This is where the **DebugUtils** library comes into play. 

The motivation of the librray was acquired from [here](http://www.arduino.cc/cgi-bin/yabb2/YaBB.pl?num=1271517197).

## How-To
Follow the following steps to get started.

1. First download this library and put it under the libraries directory. 
2. Include the libary to your project using `#include <DebugUtils.h>`.
3. Depending on your need, define one of the followings just before the library include as stated on step 2.
    * `#define DEBUG_VERBOSE`: Detailed debug output that includes *time*, *function signature*, *file*, *line* along with the *input argument*. 
    * `#define DEBUG_SIMPLE`: Minimalistic debug output or *as-it-is* provided. 
4. Use print statements as `DEBUG_PRINT(str)` or `DEBUG_PRINTLN(str)` to output the debug information. 

An example is also provided with the library to facilitate the usage. 

## End of Debugging
When you are done developing your code, just comment out the define statement (of step 3 in How-To section) and you are good to go. There won't be any debug info output on the Serial Monitor. 

