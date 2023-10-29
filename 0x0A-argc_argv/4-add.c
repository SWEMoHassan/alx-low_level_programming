#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_digit - Checks if a character is a digit.
 * @c: The character to check.
 * Return: 1 if c is a digit, 0 otherwise.
 */
int is_digit(char c)
{
return (c >= '0' && c <= '9');
}
/**
 * add_positive_numbers - Adds positive numbers
 * @argc: The number of command-line arguments
 * @argv: The array of command-line arguments
 * Return: The sum of positive numbers
 */
int add_positive_numbers(int argc, char **argv)
{
int i;
int sum = 0;
int num;
if (argc == 1)
{
return (0);
}
sum = 0;
for (i = 1; i < argc; i++)
{
char *arg = argv[i];
while (*arg != '\0')
{
if (!is_digit(*arg))
{
printf("Error\n");
return (1);
}
arg++;
}
num = atoi(argv[i]);
if (num < 0)
{
printf("Error\n");
return (1);
}
sum += num;
}
return (sum);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
int sum = add_positive_numbers(argc, argv);
printf("%d\n", sum);
return (0);
}
