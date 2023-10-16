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
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to the string
 */
void puts_half(char *str)
{
int length = _strlen(str);
int i, start;

if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length - 1) / 2;
}
for (i = start; i < length; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}

