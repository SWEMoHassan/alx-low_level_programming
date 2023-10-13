#include "main.h"

/**
 * print_triangle - prints a triangle of '#' characters in the terminal
 * @size: size of the triangle
 * Description: If size is 0 or less, prints a newline.
 * The triangle is followed by a newline character.
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j, k;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size - i; j++)
{
_putchar(' ');
}
for (k = 1; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
