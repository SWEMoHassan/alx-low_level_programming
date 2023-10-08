#include <stdio.h>

/**
 * main - Entry point
 * function: prints all single digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;

for (digit = 0; digit <= 9; digit++)
{
	putchar(digit + '0');
}
putchar('\n');

return (0);
}
