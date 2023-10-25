#include "main.h"

/**
 * helper - finds the square root
 * @n: input number
 * @i: iterator
 *
 * Return: square root of n, -1 if no
 */
int helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 *
 * Return: square root of n, or -1 if n does not
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (helper(n, 0));
}
