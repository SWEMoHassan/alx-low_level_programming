#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 */
void more_numbers(void)
{
int count, digit;
for (count = 0; count < 10; count++)
{
for (digit = 0; digit <= 14; digit++)
{
if (digit > 9)
{
_putchar('1');
}
_putchar(digit % 10 + '0');
}
_putchar('\n');
}
}
