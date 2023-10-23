#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the square matrix
 * @size: Size of the matrix
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0;
int i, j;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i]; // Sum of the main diagonal
sum2 += a[i * size + (size - 1 - i)]; // Sum of the other diagonal
}
for (j = 0; j < 2; j++)
{
if (j == 0)
_putchar(sum1 / 10 + '0');
else
_putchar(sum1 % 10 + '0');
}
_putchar(',');
_putchar(' ');
for (j = 0; j < 7; j++)
{
if (j == 0)
_putchar(sum2 / 1000000 + '0');
else if (j == 1)
_putchar((sum2 / 100000) % 10 + '0');
else if (j == 2)
_putchar((sum2 / 10000) % 10 + '0');
else if (j == 3)
_putchar((sum2 / 1000) % 10 + '0');
else if (j == 4)
_putchar((sum2 / 100) % 10 + '0');
else if (j == 5)
_putchar((sum2 / 10) % 10 + '0');
else
_putchar(sum2 % 10 + '0');
}
_putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int c3[3][3] = {
{0, 1, 5},
{10, 11, 12},
{1000, 101, 102},
};
int c5[5][5] = {
{0, 1, 5, 12124, 1234},
{10, 11, 12, 123521, 12512},
{1000, 101, 102, 12545, 214543435},
{100, 1012451, 11102, 12545, 214543435},
{10, 12401, 10452, 11542545, 1214543435},
};
print_diagsums((int *)c3, 3);
print_diagsums((int *)c5, 5);
return (0);
}
