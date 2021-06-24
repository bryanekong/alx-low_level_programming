#include "holberton.h"
/**
 * print_diagonal - Write a function that draws a diagonal line on the terminal
 * @n: Integer amount of \
 */
void print_diagonal(int n)
{
char c;

for (c = 0; c < n; c++)
_putchar('\\');
_putchar('\n');
}
