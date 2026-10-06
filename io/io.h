/*
* Includes
*/
#include "../uZ.h"    // uZ utility header file.

#ifndef IO_H
#define IO_H
    /*
    * Input functions.
    * ioReadLn - Reads a line of text from the input.
    * ioKeyBeingPressed - Checks if a key (can be specific) is currently being pressed.
    */
    char *ioRead();
    bool ioKeyBeingPressed(int key);

    /*
    * Output functions.
    * ioWriteCenteredLn - Writes a line of text centered to the console.
    */
   void ioWriteCenteredLn(const char *text);
#endif