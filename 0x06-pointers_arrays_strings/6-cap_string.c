#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 * Return: pointer to the resulting string
 */
char *cap_string(char *str)
{
int i = 0;
int new_word = 1;

while (str[i])
{
if (new_word && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 'a' + 'A';
new_word = 0;
}
else if (new_word && str[i] >= 'A' && str[i] <= 'Z')
{
new_word = 0;
}

if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}') {
new_word = 1;
}

i++;
}

return (str);
}
