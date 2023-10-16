#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a string
 * Return: length of the string
 */
void puts_half(char *str)
{
int length = 0;
int halfLength;
int i;
while (str[length] != '\0')
length++;

if (length % 2 == 0)
halfLength = length / 2;
else
halfLength = (length - 1) / 2;

for (i = halfLength; i < length; i++)
_putchar(str[i]);

_putchar('\n');
}
