#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 * @haystack: The string to search in.
 * @needle: The substring to locate.
 *
 * Return: A pointer , or NULL
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}

if (needle[j] == '\0')
return (haystack + i);
}

return (NULL);
}

