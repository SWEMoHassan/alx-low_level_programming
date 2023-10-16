#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a string
 * Return: length of the string
 */
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}

return (length);
}

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to the string to be printed in reverse
 */
void print_rev(char *s)
{
int length = _strlen(s);
int i;

for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n');
}
