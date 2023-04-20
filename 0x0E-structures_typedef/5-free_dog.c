#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function for stuct dog
 * @d: struct dog pointer
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
