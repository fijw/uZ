/*
* |------------------------------------------------------|
* | uZ - My simple as fuck utility library written in C. |
* |------------------------------------------------------|
* | input.h -> * ioReadLn - Reads a line of text from    |
* |              the input.                              |
* |            * ioKeyBeingPressed - Checks if a key     |
* |              (can be specific) is currently being    |
* |              pressed.                                |
* |------------------------------------------------------|
* | console.h -> * consoleGetSize - Gets the current     |
* |                console size.                         |
* |              * consoleSetSize - Sets the console     |
* |                size.                                 |
* |              * consoleSetPosition - Sets the console |
* |                position.                             |
* |              * consoleLockResize - Locks the console |
* |                from being resized.                   |
* |              * consoleLockMaximize - Locks the       |
* |                console from being maximized.         |
* |              * consoleLockFullscreen - Locks the     |
* |                console from entering fullscreen.     |
* |------------------------------------------------------|
* | table.h -> * dictionaryGet - Retrieves the value     |
* |              associated with a given key in the      |
* |              dictionary.                             |
* |            * dictionarySet - Adds or updates a       |
* |              key-value pair in the dictionary.       |
* |            * dictionaryFindKey - Finds the key       |
* |              associated with a given value in the    |
* |              dictionary.                             |
* |            * arrayGet - Retrieves the value at a     |
* |              given index in the array.               |
* |            * arrayPush - Adds a value to the end of  |
* |              the array.                              |
* |            * arrayPop - Removes and returns the last |
* |              value in the array.                     |
* |            * arrayFindIndex - Finds the index of a   |
* |              given value in the array.               |
* |------------------------------------------------------|
* | Written very shittily by k4. https://github.com/fijw |
* |------------------------------------------------------|
*/

#ifndef UZ_H
#define UZ_H
    /*
    * Includes pt.1
    * Contains all usual header files so they don't have to be included everywhere.
    */
    #include <stdio.h>      // printf, scanf, FILE, fopen, etc.
    #include <stdlib.h>     // malloc, free, rand, exit, system, etc.
    #include <string.h>     // strcpy, strlen, strcmp, memcpy, etc.
    #include <stdbool.h>    // bool, true, false
    #include <stdint.h>     // uint8_t, int32_t, uint64_t, etc.
    #include <stddef.h>     // size_t, NULL, ptrdiff_t
    #include <ctype.h>      // isalpha, isdigit, toupper, tolower, etc.
    #include <math.h>       // sqrt, pow, sin, cos, etc.
    #include <time.h>       // time, clock, srand, etc.
    #include <assert.h>     // assert()
    #include <limits.h>     // INT_MAX, INT_MIN, etc.
    #include <float.h>      // FLT_MAX, DBL_MAX, etc.
    #include <errno.h>      // errno
    #include <windows.h>    // Windows API
    #include <conio.h>      // _getch(), _kbhit(), etc.

    /*
    * Includes pt.2
    * Contains all uZ utility header files.
    * (input.h, console.h, table.h)
    */
    #include "input/input.h"
    #include "console/console.h"
    #include "table/table.h"
#endif