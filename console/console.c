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
#include "console.h"    // Console utilities header file.

/*
* Implementations
*/
void consoleGetSize(int *width, int *height)
{
    CONSOLE_SCREEN_BUFFER_INFO ConsoleInfo;

    // Get the console screen buffer information
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleInfo);

    // Get the console size
    *width = ConsoleInfo.srWindow.Right - ConsoleInfo.srWindow.Left + 1;
    *height = ConsoleInfo.srWindow.Bottom - ConsoleInfo.srWindow.Top + 1;
}
void consoleSetSize(int width, int height)
{
    HWND ConsoleWindow = GetConsoleWindow();

    // Set the console window size w/ no movement
    SetWindowPos(ConsoleWindow, NULL, 0, 0, width, height, SWP_NOMOVE | SWP_NOZORDER);
}
void consoleSetPosition(int x, int y)
{
    HWND ConsoleWindow = GetConsoleWindow();

    // Set the console position w/ no resizing
    SetWindowPos(ConsoleWindow, NULL, x, y, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
}
void consoleLockResize(bool lock)
{
    HWND ConsoleWindow = GetConsoleWindow();
    LONG Style = GetWindowLong(ConsoleWindow, GWL_STYLE);

    // Set the console window style's lock status for resizing
    if (lock) { Style &= ~WS_THICKFRAME; }
    else { Style |= WS_THICKFRAME; }

    // Set the console window style
    SetWindowLong(ConsoleWindow, GWL_STYLE, Style);
}
void consoleLockMaximize(bool lock)
{
    HWND ConsoleWindow = GetConsoleWindow();
    LONG Style = GetWindowLong(ConsoleWindow, GWL_STYLE);

    // Set the console window style's lock status for maximizing
    if (lock) { Style &= ~WS_MAXIMIZEBOX; }
    else { Style |= WS_MAXIMIZEBOX; }

    // Set the console window style
    SetWindowLong(ConsoleWindow, GWL_STYLE, Style);
}
void consoleLockFullscreen(bool lock)
{
    HWND ConsoleWindow = GetConsoleWindow();
    LONG Style = GetWindowLong(ConsoleWindow, GWL_STYLE);

    // Set the console window style's lock status for fullscreen
    if (lock) { Style &= ~WS_EX_TOPMOST; }
    else { Style |= WS_EX_TOPMOST; }

    // Set the console window style
    SetWindowLong(ConsoleWindow, GWL_STYLE, Style);
}