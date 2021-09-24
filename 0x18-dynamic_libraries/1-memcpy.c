#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of bytes
 * Return: returns pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
