#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int i;
int j;

if (n == 0)
{
printf("0");
return;
}

for (i = n, j = 0; (i >>= 1) > 0; j++)
;

for (; j >= 0; j--)
{
if ((n >> j) & 1)
{
printf("1");
}
else
{
printf("0");
}
}
}
