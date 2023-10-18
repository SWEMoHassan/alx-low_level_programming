#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string
 * Return: pointer to the resulting string
 */
char *leet(char *str)
{
int i, j;
char leet_map[] = "aAeEoOtTlL";
char leet_replace[] = "44330771";

i = 0;
while (str[i] != '\0')
{
j = 0;
while (leet_map[j] != '\0')
{
if (str[i] == leet_map[j])
{
str[i] = leet_replace[j];
break;
}
j++;
}
i++;
}

return (str);
}

