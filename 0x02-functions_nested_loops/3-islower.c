#include "main.h"
/**
 * _islower - function that checks for lowecase charracter
 * @c: parameter to be printed on stdo
 * Return: 0 if success
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
