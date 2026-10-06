/*
* Includes
*/
#include "console.h"    // Console utilities header file.
#include "../uZ.h"      // uZ utility header file.

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