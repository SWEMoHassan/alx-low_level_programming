#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of needle
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: A pointer, or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;

while (*n != '\0' && *h == *n)
{
h++;
n++;
}

        if (*n == '\0')
return (haystack);

haystack++;
}

return (NULL);
}
