#include "main.h"
/**
 * print_most_numbers - print numers from 0 to 9 withe exemptions
 * _putchar: function to print it out
 * Return: 0 if success
*/
void print_most_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
if (c == '2' || c == '4')
{
continue;
}
_putchar(c);
}
_putchar('\n');
}
