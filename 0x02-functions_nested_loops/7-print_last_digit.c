#include "holberton.h"

/**
 * print_last_digit - check the code for ALX School students.
 * n@: is the int that will use for the argument of the function
 * Return: interger value.
 */
int print_last_digit(int n)
{
int last = n % 10;

if (n < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
