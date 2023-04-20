#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Function that print each array element on new line
 * @array: parameter for array
 * @size: size of array
 * @action: pointer to funvtion that prints in regular or hexadecimal
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
