#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to the concatenated string, or NULL
 */
char *argstostr(int ac, char **av)
{
int i, j, len = 0;
char *concatenated;
int k = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
len++;
}
len++;
}
concatenated = malloc(len *sizeof(char) + 1);
if (concatenated == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
concatenated[k++] = av[i][j];
}
concatenated[k++] = '\n';
}
concatenated[k] = '\0';
return (concatenated);
}
