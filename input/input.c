/*
* Includes
*/
#include "../uZ.h"    // uZ utility header file.
#include "io.h"       // Input & output utilities header file.

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