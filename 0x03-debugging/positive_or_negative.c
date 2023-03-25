#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - Function that checks if number is positive/ negative
 * @i: Parameter of number to be checked
 * Return: i
 */
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
return;
}
