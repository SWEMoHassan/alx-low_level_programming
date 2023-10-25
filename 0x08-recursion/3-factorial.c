#include "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n: input number
 *
 * Return: factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (1);
return (n * factorial(n - 1));
}
