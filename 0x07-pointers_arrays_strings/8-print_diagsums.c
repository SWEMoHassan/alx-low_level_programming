#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the square matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, diag1 = 0, diag2 = 0;
for (i = 0; i < size; i++)
{
diag1 += *(a + i * size + i);
diag2 += *(a + i * size + (size - 1 - i));
}
if (size > 0)
{
int temp = diag1;
int divisor = 1;
while (temp >= 10)
{
temp /= 10;
divisor *= 10;
}
while (divisor > 0)
{
_putchar('0' + diag1 / divisor);
diag1 %= divisor;
divisor /= 10;
}
_putchar(',');
temp = diag2;
divisor = 1;
while (temp >= 10)
{
temp /= 10;
divisor *= 10;
}
while (divisor > 0)
{
_putchar('0' + diag2 / divisor);
diag2 %= divisor;
divisor /= 10;
}
}
else
{
_putchar('0');
_putchar(',');
_putchar('0');
}
_putchar('\n');
}
