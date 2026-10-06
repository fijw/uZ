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

#ifndef TABLE_H
#define TABLE_H
    /*
    * Dictionary structure.
    * Includes a pointer to an array of entries & a count of entries.
    */
    typedef struct
    {
        union
        {
            void *key;
            void *value;
        } *Entries;

        size_t size;
    } Dictionary;

    /*
    * Array structure.
    * Includes a pointer to an array of values & a count of values.
    */
    typedef struct
    {
        void **Values;
        size_t size;
    } Array;

    /*
    * Dictionary functions.
    * dictionaryGet - Retrieves the value associated with a given key in the dictionary.
    * dictionarySet - Adds or updates a key-value pair in the dictionary.
    * dictionaryFindKey - Finds the key associated with a given value in the dictionary.
    */
    void *dictionaryGet(Dictionary *Dictionary, void *key);
    void dictionarySet(Dictionary *Dictionary, void *key, void *value);
    void *dictionaryFindKey(Dictionary *Dictionary, void *value);

    /*
    * Array functions.
    * arrayGet - Retrieves the value at a given index in the array.
    * arrayPush - Adds a value to the end of the array.
    * arrayPop - Removes and returns the last value in the array.
    * arrayFindIndex - Finds the index of a given value in the array.
    */
    void *arrayGet(Array *Array, size_t index);
    void arrayPush(Array *Array, void *value);
    void *arrayPop(Array *Array);
    void *arraySet(Array *Array, size_t index, void *value);
    size_t arrayFindIndex(Array *Array, void *value);
#endif