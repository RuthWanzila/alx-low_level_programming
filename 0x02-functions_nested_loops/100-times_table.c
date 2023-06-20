#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _putchar(char c)
{
write(1, &c, 1);
}

/**
 * print_times_table - prints the n times table starting with 0
 * @n: The number to print the times table for
 */
void print_times_table(int n)
{
if (n < 0 || n > 15)
return;

int x, y, product;

for (x = 0; x <= n; x++)
{
for (y = 0; y <= n; y++)
{
product = x * y;
if (y == 0)
{
_putchar('0' + product);
}
else
{
_putchar(',');
_putchar(' ');
if (product < 10)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + product);
}
else if (product < 100)
{
_putchar(' ');
_putchar('0' + product / 10);
_putchar('0' + product % 10);
}
else
{
_putchar('0' + product / 100);
_putchar('0' + (product / 10) % 10);
_putchar('0' + product % 10);
}
}
}
_putchar('\n');
}
}
