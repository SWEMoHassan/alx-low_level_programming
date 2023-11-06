#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees a dog
 * @d: Pointer to the struct dog variable
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
