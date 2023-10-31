#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string using dynamic memory
 * @str: the input string to be duplicated
 * Return: pointer to the duplicated string, or NULL
 */
char *_strdup(char *str)
{
char *duplicate;
unsigned int i, len = 0;
if (str == NULL)
return (NULL);
while (str[len] != '\0')
len++;
duplicate = malloc((len + 1) * sizeof(char));
if (duplicate == NULL)
return (NULL);
for (i = 0; i <= len; i++)
duplicate[i] = str[i];
return (duplicate);
}
