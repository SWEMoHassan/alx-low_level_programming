#include "main.h"

/**
 * print_line - prints a line of underscores in the terminal
 * @n: number of times the character '_' should be printed
 * Description: If n is 0 or less, prints a newline.
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
_putchar('_');
print_line(n - 1);
}
}
