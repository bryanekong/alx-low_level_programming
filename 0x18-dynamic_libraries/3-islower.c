#include "main.h"

/**
 * _islower - a function that checks for lowercase chatacter
 *
 * @c: is the int that will use for the argument of the function
 * Return: 1 if lowercase character 0 if not
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
