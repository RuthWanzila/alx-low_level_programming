#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals.
 * of a square matrix of integers
 * @a: square matrix
 * @size: size of the square matrix.
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
int i = 0;
int j = size - 1;
int rslt1 = 0;
int rslt2 = 0;
while (i <= (size * size))
{
rslt1 = rslt1 + a[i];
i = i + size + 1;
}
while (j < (size * size - 1))
{
rslt2 += a[j];
j = j + size - 1;
}
printf("%d, %d\n", rslt1, rslt2);
}
