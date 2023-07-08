#include "main.h"
/**
* print_number - prints an integer
*@n:integer to be printed
*Return: 0
*/
void print_number(int n)
{
if (n == INT_MIN)
{

_putchar('-');
print_number((n / 10) * (-1));
_putchar('8');
return;
}
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10 != 0)
{
print_number(n / 10);
}
_putchar(n % 10 + '0');
}
