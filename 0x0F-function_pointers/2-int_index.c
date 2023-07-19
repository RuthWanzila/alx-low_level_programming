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
 if (size <= 0)
{
return (-1);
}
for (int i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
