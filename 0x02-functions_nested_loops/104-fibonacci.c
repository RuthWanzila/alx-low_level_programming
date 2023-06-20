#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long int prev = 0, current = 1, next, i;
for (i = 0; i < 98; i++)
{
printf("%lu", current);
if (i != 97)
printf(", ");
next = prev + current;
prev = current;
current = next;
}
printf("\n");

return (0);
}
