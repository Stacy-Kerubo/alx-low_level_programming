#include "function_pointers.h"
#include <stddef.h> 
/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: A pointer to the function to execute on each element.
 *
 * Description: This function takes an array, its size, and a function pointer
 * to an action function. It iterates over each element of the array and calls
 * the action function on each element. The action function is responsible for
 * defining the specific operation to be performed on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array && action)
    {
        size_t i;
        for (i = 0; i < size; i++)
            action(array[i]);
    }
}

