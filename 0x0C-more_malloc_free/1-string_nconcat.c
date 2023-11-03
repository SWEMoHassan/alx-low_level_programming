#include <stdlib.h>
#include "main.h"

/**
 * _strncpy - Copies up to n characters from the source string
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to copy
 * Return: Pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for (; i < n; i++)
dest[i] = '\0';
return (dest);
}
/**
 * string_nconcat - Concatenates two strings up to n bytes
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes from s2 to concatenate
 * Return: Pointer to the newly allocated concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2;
char *concatenated;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (len1 = 0; s1[len1] != '\0'; len1++)
for (len2 = 0; s2[len2] != '\0'; len2++)
if (n >= len2)
n = len2;
concatenated = malloc(len1 + n + 1);
if (concatenated == NULL)
return (NULL);
_strncpy(concatenated, s1, len1);
_strncpy(concatenated + len1, s2, n);
return (concatenated);
}
