#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: unsigned int to be allocated memory
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
