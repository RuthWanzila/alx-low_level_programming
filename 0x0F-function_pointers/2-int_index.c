#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array of elements
 * @size: no. of elements in the array
 * @cmp: function pointer
 * Return: -1 if no element matches
 * -1 if size <= 0
 *  index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size < 1 || array == NULL || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
