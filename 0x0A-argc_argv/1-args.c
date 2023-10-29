#include <stdio.h>
#include "main.h"

/**
 * count_arguments - Counts the number of command-line arguments.
 * @argc: The number of command-line arguments.
 * Return: The number of command-line arguments.
 */
int count_arguments(int argc)
{
return (argc);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
int num_args;
(void)argv;
num_args = count_arguments(argc);
printf("%d\n", num_args);
return (0);
}
