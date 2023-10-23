#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string
 * @s: The string to be searched
 * @accept: The bytes to search for
 *
 * Return: A pointer, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *temp_accept = accept;
while (*temp_accept != '\0')
{
if (*s == *temp_accept)
return (s);
temp_accept++;
}
s++;
}
return (NULL);
}
