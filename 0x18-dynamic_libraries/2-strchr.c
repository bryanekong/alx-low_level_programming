#include "main.h"

/**
 * _strchr - locates a character in a string
 *@c: the first character we are looking for
 *@s: the string
 *Return: Return @s or @c or NULL
 */

char *_strchr(char *s, char c)
{
while (*s)
{
s++;

if (*s == c)
{
return (s);
}


}

return (0);
}
