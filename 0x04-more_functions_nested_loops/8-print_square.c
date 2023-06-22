#include "main.h"
/**
*print_square - prints squares
*@size: parameter
*Return:returns nothing
*/
void print_square(int size)
{
int s, t;
if (size > 0)
{
for (s = 0; s < size; s++)
{
for (t = 0; t < (size - 1); t++)
_putchar('#');

_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
