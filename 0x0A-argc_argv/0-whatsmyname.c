#include <stdio.h>
#include "main.h"

/**
 * print_program_name - Prints the program name.
 * @argv: The array of command-line arguments.
 */
void print_program_name(char **argv)
{
char *program_name = argv[0];
while (*program_name != '\0')
{
_putchar(*program_name);
program_name++;
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
(void)argc;
print_program_name(argv);
return (0);
}
