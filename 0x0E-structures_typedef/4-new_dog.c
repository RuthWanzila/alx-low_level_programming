#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *_strcpy - Copy the given string
 * @dest: Location to copy string to
 * @src: String to copy to given location
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*(src + i) != 0)
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @owner: dog owner
 * @age: age of the dog
 * Return: pointer to struct, NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *new_name;
char *new_owner;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

new_name = malloc(strlen(name) + 1);
if (new_name == NULL)
{
free(new_dog);
return (NULL);
}
strcpy(new_name, name);

new_owner = malloc(strlen(owner) + 1);
if (new_owner == NULL)
{
free(new_name);
free(new_dog);
return (NULL);
}
strcpy(new_owner, owner);

new_dog->name = new_name;
new_dog->age = age;
new_dog->owner = new_owner;
return (new_dog);
}
