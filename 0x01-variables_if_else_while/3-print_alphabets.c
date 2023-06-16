#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;
/*print lowercase*/
for (c = 'a'; c <= 'z'; ++c)
putchar(c);
/*print uppercase*/
for (c = 'A'; c <= 'Z'; ++c)
putchar (c);
putchar('\n');
return (0);
}
