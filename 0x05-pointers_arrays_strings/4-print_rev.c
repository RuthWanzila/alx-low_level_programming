#include "main.h"
/**
* print_rev -  prints a string, in reverse
* @s - string to be printed
* Return: 0
*/
void print_rev(char *s)
{
int str = 0;

while (s[str] != '\0')
{
str++;
}
for (int i = str - 1; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n');
}
