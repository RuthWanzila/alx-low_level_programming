#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x;
unsigned int count;
x = n ^ m;
count = 0;
while (x > 0)
{
count += x & 1;
x >>= 1;
}

return (count);
}
