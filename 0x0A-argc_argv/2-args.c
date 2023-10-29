#include <stdio.h>
#include "main.h"

/**
 * print_string - Prints a string to the console.
 *
 * @str: The string to print.
 */
void print_string(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 * Return: 0 on success, or a non-zero value on failure.
 */
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
print_string(argv[i]);
_putchar('\n');
}
return (0);
}
