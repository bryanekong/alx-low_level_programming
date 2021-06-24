#include "holberton.h"
/**
 * more_numbers_x10 - print the numbers from 0-9 ten times
 */
void more_numbers(void)
{
int i;
char c;

for (i = 0; i < 10; i++)
{
for (c = '0'; c <= '14'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
