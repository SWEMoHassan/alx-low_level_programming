#include "main.h"

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array containing the command line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int i = 0;
while (argv[0][i] != '\0')
{
_putchar(argv[0][i]);
i++;
}
_putchar('\n');
(void)argc;
return (0);
}
