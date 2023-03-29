#include "main.h"
/**
 * swap_int - Function that swap values of integer a and b
 * @a: 1st parameter used
 * @b: 2nd parameter used
 * Return: *a and *b
*/

void swap_int(int *a, int *b)
{
int m;

m = *a;
*a = *b;
*b = m;
}
