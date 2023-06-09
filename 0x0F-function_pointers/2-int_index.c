#include "function_pointers.h"

/**
 * int_index - function index to compare values
 * @array: parameter for the arrat
 * @size: size of the array
 * @cmp: pointer to a function to be used to compare values
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
