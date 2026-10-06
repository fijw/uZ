/*
* Includes
*/
#include "../uZ.h"    // uZ utility header file.

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