#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;

for (i = 0; i <= 8; ++i)
{
for (j = i + 1; j <= 9; ++j)
{
int num = (i * 10) + j;
putchar((num / 10) + '0');
putchar((num % 10) + '0');
if (num < 89)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
