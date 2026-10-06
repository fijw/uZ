/*
* Includes pt.1
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
*/
#include "io.h"    // Input & output utilities header file.

/*
* Implementations
*/
char *ioRead()
{
    // Create a 256-byte buffer & write an inputted line of text to it.
    static char buffer[256];
    fgets(buffer, sizeof(buffer), stdin);

    return buffer;
}
bool ioKeyBeingPressed(int key)
{
    if (!key)
    {
        // Loop through each key & return true if any are being pressed
        for (int i = 1; i < 256; i++) { if (GetAsyncKeyState(i) & 0x8000) { return true; } }

        return false;
    }

    return GetAsyncKeyState(key) & 0x8000;
}