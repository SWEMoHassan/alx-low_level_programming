#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * multiply - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The product of a and b.
 */
int multiply(int a, int b)
{
return (a * b);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char **argv)
{
int a, b, result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
result = multiply(a, b);
printf("%d\n", result);
return (0);
}
