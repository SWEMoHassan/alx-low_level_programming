#include "main.h"

/**
 * count_bits - Counts the number of bits in an unsigned long int.
 * @n: The number to count bits for.
 * Return: Number of bits.
 */
int count_bits(unsigned long int n)
{
int count = 0;
while (n > 0)
{
n >>= 1;
count++;
}
return (count);
}
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
int bits = count_bits(n);
unsigned long int mask = 1UL << (bits - 1);
if (n == 0)
{
_putchar('0');
return;
}
while (mask > 0)
{
if (n & mask)
_putchar('1');
else
_putchar('0');
mask >>= 1;
}
}
