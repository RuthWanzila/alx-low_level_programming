#include "search_algos.h"

/**
* linear_search - searches for a value in an array of
* integers using the Linear search algorithm
*
* @array: pointer to the first element of the array
* @size: number of elements in the array
* @value: value to search for
* Return: the first index where the value is located,
*         or -1 if the value is not present or if the array is NULL
*/
int linear_search(int *array, size_t size, int value)
{
int i;

if (array == NULL)
return -1;

for (i = 0; i < (int)size; i++)
{
printf("Comparing array[%u] = %d with value %d\n", i, array[i], value);
if (array[i] == value)
return i;
}

return -1;
}
