/*
* Includes
*/
#include "../uZ.h"    // uZ utility header file.
#include "table.h"    // Table utilities header file.

/*
* Dictionary implementations
*/
void dictionarySet(Dictionary *Dictionary, void *key, void *value)
{
    // Allocate memory for the new entry
    Dictionary->Entries = realloc(
        Dictionary->Entries,
        sizeof(*Dictionary->Entries) * ++Dictionary->size
    );

    // Initialize the new entry
    Dictionary->Entries[Dictionary->size - 1].key = key; Dictionary->Entries[Dictionary->size - 1].value = value;
}
void *dictionaryGet(Dictionary *Dictionary, void *key)
{
    // Search for the key in a loop, if found return the value
    for (size_t i = 0; i < Dictionary->size; i++)
    {
        if (Dictionary->Entries[i].key == key) { return Dictionary->Entries[i].value; }
    }

    return NULL;
}
void *dictionaryFindKey(Dictionary *Dictionary, void *value)
{
    // Search for the value in a loop, if found return the key
    for (size_t i = 0; i < Dictionary->size; i++)
    {
        if (Dictionary->Entries[i].value == value) { return Dictionary->Entries[i].key; }
    }

    return NULL;
}

/*
* Array implementations
*/
void *arrayGet(Array *Array, size_t index)
{
    // Check if the index is valid (within bounds & not NULL)
    return index < Array->size ? Array->Values[index] : NULL;
}
void arrayPush(Array *Array, void *value)
{
    // Allocate memory for the new element
    Array->Values = realloc(
        Array->Values,
        sizeof(*Array->Values) * ++Array->size
    );

    // Initialize the new element
    Array->Values[Array->size - 1] = value;
}
void *arrayPop(Array *Array)
{
    if (!Array->size) { return NULL; }

    void *value = Array->Values[Array->size - 1];

    // Lower array size count & reallocate memory
    Array->size--;
    Array->Values = realloc(
        Array->Values,
        sizeof(*Array->Values) * Array->size
    );

    return value;
}
void *arraySet(Array *Array, size_t index, void *value)
{
    if (index >= Array->size) { return NULL; }

    void *oldValue = Array->Values[index];

    // Set the new value
    Array->Values[index] = value;

    return oldValue;
}
size_t arrayFindIndex(Array *Array, void *value)
{
    // Search for the value in a loop, if found return the index
    for (size_t i = 0; i < Array->size; i++)
    {
        if (Array->Values[i] == value) { return i; }
    }
    
    return SIZE_MAX;
}