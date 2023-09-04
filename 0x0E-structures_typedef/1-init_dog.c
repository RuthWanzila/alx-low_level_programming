#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
