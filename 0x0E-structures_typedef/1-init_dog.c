#include "dog.h"
#include <stlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != '\0')
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
