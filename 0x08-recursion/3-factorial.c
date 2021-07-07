#include "holberton.h"

/**
 * factorial - a function that returns the factorial of a number
 *@n: the given number
 *Return: factorial
 */

int factorial(int n)
{
if (n < 0)
return (-1);
return (n * factorial(n - 1));
}
