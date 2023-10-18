#include "main.h"

/**
 * is_separator - checks if a character is a word separator
 * @c: input character
 * Return: 1 if separator, 0 otherwise
 */
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;

for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
{
return (1);
}
}

return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 * Return: pointer to the resulting string
 */
char *cap_string(char *str)
{
int i;

if (str[0] >= 'a' && str[0] <= 'z')
{
str[0] -= 32;
}

for (i = 1; str[i] != '\0'; i++)
{
if (is_separator(str[i - 1]) && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] -= 32;
}
}

return (str);
}

