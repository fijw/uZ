/*
* Includes
*/
#include "../uZ.h"    // uZ utility header file.

#ifndef INPUT_H
#define INPUT_H
    /*
    * Input functions.
    * ioReadLn - Reads a line of text from the input.
    * ioKeyBeingPressed - Checks if a key (can be specific) is currently being pressed.
    */
    char *ioRead();
    bool ioKeyBeingPressed(int key);
#endif