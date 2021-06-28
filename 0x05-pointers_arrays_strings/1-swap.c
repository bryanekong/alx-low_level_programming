#include "holberton.h"

/**
 *swap_int - a function that swaps 2 integers
 *@a: first integer
 *@b: second integer
 *Return: Always 0
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
