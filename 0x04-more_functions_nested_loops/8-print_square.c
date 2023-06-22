#include "main.h"
/**
*print_square - prints squares
*@size: parameter
*Return:returns nothing
*/
void print_square(int size)
{
int L1, L2;
if (size > 0)
{
for (L1 = 0; L1 < size; L1++)
{
for (L2 = 0; L2 < (size - 1); L2++)
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
