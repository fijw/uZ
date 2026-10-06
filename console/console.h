/*
* Includes
*/
#include "../uZ.h"    // uZ utility header file.

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