#include "main.h"
#include <stdio.h>

/**
 * sum_diagonal - calculates the sum of a diagonal in the matrix
 * @a: pointer to the square matrix
 * @size: size of the matrix
 * @step: step value to traverse the diagonal
 *
 * Return: sum of the diagonal elements
 */
int sum_diagonal(int *a, int size, int step)
{
int i, sum = 0;
for (i = 0; i < size; i++)
{
sum += *(a + i * size + (i * step));
}
return (sum);
}

/**
 * print_diagsums - prints the sum of two
 * @a: pointer to the square matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int diag1 = sum_diagonal(a, size, 1);
int diag2 = sum_diagonal(a, size, -1);
if (size > 0)
{
printf("%d, ", diag1);
printf("%d\n", diag2);
}
else
{
printf("0, 0\n");
}
}
