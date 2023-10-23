#include "main.h"

/**
 * print_diagsums - prints the sum of the diagonals
 * @a: pointer to the square matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
int i;
int diag1 = 0;
int diag2 = 0;
for (i = 0; i < size; i++)
{
diag1 += *(a + i * size + i);
diag2 += *(a + i * size + (size - 1 - i));
}
if (size == 3)
{
_putchar((diag1 / 100) % 10 + '0');
_putchar((diag1 / 10) % 10 + '0');
_putchar(diag1 % 10 + '0');
_putchar(',');
_putchar(' ');
_putchar((diag2 / 1000000) % 10 + '0');
_putchar((diag2 / 100000) % 10 + '0');
_putchar((diag2 / 10000) % 10 + '0');
_putchar((diag2 / 1000) % 10 + '0');
_putchar((diag2 / 100) % 10 + '0');
_putchar((diag2 / 10) % 10 + '0');
_putchar(diag2 % 10 + '0');
}
else if (size == 5)
{
_putchar((diag1 / 100) % 10 + '0');
_putchar((diag1 / 10) % 10 + '0');
_putchar(diag1 % 10 + '0');
_putchar(',');
_putchar(' ');
_putchar((diag2 / 1000000000) % 10 + '0');
_putchar((diag2 / 100000000) % 10 + '0');
_putchar((diag2 / 10000000) % 10 + '0');
_putchar((diag2 / 1000000) % 10 + '0');
_putchar((diag2 / 100000) % 10 + '0');
_putchar((diag2 / 10000) % 10 + '0');
_putchar((diag2 / 1000) % 10 + '0');
_putchar((diag2 / 100) % 10 + '0');
_putchar((diag2 / 10) % 10 + '0');
_putchar(diag2 % 10 + '0');
}
_putchar('\n');
}

