#include "main.h"

/**
 * reset_to_98 - updates the value it points to to 98.
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{


n = 402;

_putchar(n);
reset_to_98(&n);
_putchar(n);
return (0);
}
