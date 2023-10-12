#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
char digit;
digit = '0';
while (digit <= '9')
{
write(1, &digit, 1);
digit++;
}
write(1, "\n", 1);
}
