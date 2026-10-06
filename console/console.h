/*
* Includes
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

#ifndef CONSOLE_H
#define CONSOLE_H
    /*
    * Console functions.
    * consoleGetSize - Gets the current console size.
    * consoleSetSize - Sets the console size.
    * consoleSetPosition - Sets the console position.
    * consoleLockResize - Locks the console from being resized.
    * consoleLockMaximize - Locks the console from being maximized.
    * consoleLockFullscreen - Locks the console from entering fullscreen.
    */
    void consoleGetSize(int *width, int *height);
    void consoleSetSize(int width, int height);
    void consoleSetPosition(int x, int y);
    void consoleLockResize(bool lock);
    void consoleLockMaximize(bool lock);
    void consoleLockFullscreen(bool lock);
#endif