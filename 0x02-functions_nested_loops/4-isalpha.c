#include "main.h"
/**
 * _isalpha - funtion that checks for alphabet
 * @c: parameter of alphabet
 * Return: 1 if alphabet else return 0
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
