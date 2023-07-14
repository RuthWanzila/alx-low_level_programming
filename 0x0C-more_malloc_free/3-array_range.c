#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: smallest no. in the array
 * @max: largest value
 * Return:  pointer to the newly created array
 */
int *array_range(int min, int max)
{
int size, *arr, i;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
arr = malloc(size * sizeof(int));

if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = min + i;
}
return (arr);
}
