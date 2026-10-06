/*
* Includes
*/
#include "../uZ.h"    // uZ utility header file.
#include "io.h"       // Input & output utilities header file.

/*
* Input Implementations
*/
char *ioRead()
{
    // Create a 256-byte buffer & write an inputted line of text to it.
    char buffer[256];
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

/*
* Output Implementations
*/
void ioWriteCenteredLn(const char *text)
{
    char buffer[256];

    // Calculate the number of spaces needed to center the text
    int width; int height; getConsoleSize(&width, &height);
    int numSpaces = (width / 2) - strlen(text);

    // Fill the buffer with spaces & end it with a null terminator
    for (int i = 0; i < numSpaces; i++)
    {
        buffer[i] = ' ';
    }
    buffer[numSpaces] = '\0';

    // Concatenate the text to the buffer & print it
    strcat(buffer, text); printf("%s\n", buffer);
}