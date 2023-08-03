#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
int i, num_bits;
num_bits = 8 * sizeof(n);
for (i = num_bits - 1; i >= 0; i--)
{
printf("%d", (n >> i) & 1);
}
printf("\n");
}
