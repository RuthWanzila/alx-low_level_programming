#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */

void puts_half(char *str)
{
int y = 0, x;
while (y >= 0)
{
if (str[y] == '\0')
break;
y++;
}
if (y % 2 == 1)
i = y / 2;
else
x = (y - 1) / 2;
for (x++; i < y; x++)
_putchar(str[x]);
_putchar('\n');
}
