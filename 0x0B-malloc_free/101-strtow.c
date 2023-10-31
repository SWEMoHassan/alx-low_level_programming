#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: input string
 *
 * Return: pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
int i, j, k, len = 0, word_count = 0;
char **words;
if (str == NULL || *str == '\0')
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
word_count++;
if (str[i] != ' ')
len++;
}
if (word_count == 0)
return (NULL);
words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
j = 0;
for (i = 0; i < len; i++)
{
if (str[i] != ' ')
{
k = i;
while (str[i] != ' ' && str[i] != '\0')
i++;
words[j] = malloc((i - k + 1) * sizeof(char));
if (words[j] == NULL)
{
for (i = 0; i < j; i++)
free(words[i]);
free(words);
return (NULL);
}
for (; k < i; k++)
words[j][k - j] = str[k];
words[j][k - j] = '\0';
j++;
}
}
words[j] = NULL;
return (words);
}
