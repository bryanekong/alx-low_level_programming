#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - a program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 always
 */

int main(int argc, char **argv)
{
while (argc--)
printf("%s\n", *argv++);
return (0);
}
