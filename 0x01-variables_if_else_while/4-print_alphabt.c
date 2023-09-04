#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
{
/*exclude e and q*/
if (c == 'e' || c == 'q')
{
continue;
}
putchar(c);
}


putchar('\n');
return (0);
}
