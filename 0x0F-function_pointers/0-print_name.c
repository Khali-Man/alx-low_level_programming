#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function pointing to a function
 * @name: parameter toprint out name
 * @f: function pointed to by print_name
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
