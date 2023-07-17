#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_dog - Frees dog struct memory
 * @d: dog to be freed
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
