#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @str: input string
 * Return: length of the string
 */
int _strlen(char *str)
{
int length = 0;
while (str[length] != '\0')
{
length++;
}
return (length);
}

/**
 * _strncat - concatenates two strings up to n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src to be concatenated
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = _strlen(dest);
int i;

for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[dest_len + i] = src[i];
}

dest[dest_len + i] = '\0';
return (dest);
}

