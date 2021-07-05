#include "holberton.h"

/**
* _memset - Fills the memory with a constant byte
* @s: A pointer to the memory area to be filled.
* @b: The character to fill the memory area with.
* @n: The unassigned integer number of bytes to be filled.
*
* Return: A pointer to the memory area @s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
