#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 * @name: Pointer to a character string (name of the dog)
 * @age: Float (age of the dog)
 * @owner: Pointer to a character string (name of the owner)
 */
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

#endif
