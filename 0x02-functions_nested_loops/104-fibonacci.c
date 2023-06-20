#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long int first = 1, second = 2, next, i;

printf("%lu, %lu", first, second);
for (i = 2; i < 98; i++)
{
next = first + second;
printf(", %lu", next);
first = second;
second = next;
}

printf("\n");

return (0);
}
