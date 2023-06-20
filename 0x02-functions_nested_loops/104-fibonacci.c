#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long int prev = 1, current = 2, next, i;

printf("%lu, %lu", prev, current);
for (i = 3; i <= 98; i++)
{
next = prev + current;
printf(", %lu", next);
prev = current;
current = next;
}
printf("\n");

return (0);
}
