#include "main.h"
#include <stdio.h>
/**
 *main - Entry Point
 *Description: 'Check for number if it is positive or negative'
 *Return: always 0
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
