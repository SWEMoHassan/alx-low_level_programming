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
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int dest_len = _strlen(dest);
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}

dest[dest_len + i] = '\0';
return (dest);
}
