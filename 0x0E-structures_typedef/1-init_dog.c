#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function to  init dog
 * @d: pointer pointing to struct dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
d = malloc(sizeof(struct dog));
}
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
