#include "holberton.h"

/**
 * print_rev - print a string in reverse
 * @s: parameter to print
 * Return: Always 0
 */

void print_rev(char *s)
{
int i = 0;

while (s[i])
{
_putchar(s[i]);
i++;
}
_putchar('\n');
}
