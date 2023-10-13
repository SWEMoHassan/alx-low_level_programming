#include "main.h"

/**
 * print_diagonal - prints a diagonal line of '\' characters in the terminal
 * @n: number of times the character '\' should be printed
 * Description: If n is 0 or less, prints a newline.
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i - 1; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
