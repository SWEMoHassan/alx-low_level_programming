#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: input string
 * Return: pointer to the resulting string
 */
char *rot13(char *str)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
int i, j;

i = 0;
while (str[i] != '\0')
{
j = 0;
while (alphabet[j] != '\0')
{
if (str[i] == alphabet[j])
{
str[i] = rot13[j];
break;
}
j++;
}
i++;
}

return (str);
}

