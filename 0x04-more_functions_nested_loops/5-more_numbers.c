#include "main.h"
/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * _putchar: function to print the numbers
 * Return: 0 if success
*/
void more_numbers(void)
{
char d;
char c;
for (d = 0; d <= 9; d++)
{
for (c = 0; c < 15; c++)
{
if (c >= 10)
{
_putchar('1');
}
_putchar (c % 10 + '0');
}
_putchar('\n');
}
}
