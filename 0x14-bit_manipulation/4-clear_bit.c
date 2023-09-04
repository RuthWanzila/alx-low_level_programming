#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: index starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int i;
unsigned int j;
if (index > 64)
return (-1);
j = index;
for (i = 1; j > 0; i *= 2, j--)
;
if ((*n >> index) & 1)
*n -= i;
return (1);
}
