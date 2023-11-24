#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: String of 0 and 1 chars.
 * Return: The converted number, or 0 if an error occurred.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
if (b == NULL)
return (0);
while (*b != '\0')
{
if (*b != '0' && *b != '1')
return (0);
num = (num << 1) + (*b - '0');
b++;
}
return (num);
}
