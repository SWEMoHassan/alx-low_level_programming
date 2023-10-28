#include "main.h"
#include <stdio.h>

/**
 * print_string - Prints a string followed by a new line
 * @str: The string to be printed
 */
void print_string(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success
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
