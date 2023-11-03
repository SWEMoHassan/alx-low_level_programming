#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the minimum value in the array (inclusive)
 * @max: the maximum value in the array (inclusive)
 * Return: a pointer to the newly array, or NULL or malloc fails.
 */
int *array_range(int min, int max)
{
int size = max - min + 1;
if (min > max)
{
return (NULL);
}
int *array = malloc(size * sizeof(int));
if (array == NULL)
{
return (NULL);
}
for (int i = 0; i < size; i++)
{
array[i] = min + i;
}
return (array);
}
