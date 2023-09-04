#include "main.h"
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: character
 * Return:  a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
unsigned int x;
char *myArray;
if (size == 0)
{
return (NULL);
}
myArray = malloc(size * sizeof(char));
if (myArray == NULL)
{
return (NULL);
}
for (x = 0; x < size; x++)
{
myArray[x] = c;
}
return (myArray);
}
