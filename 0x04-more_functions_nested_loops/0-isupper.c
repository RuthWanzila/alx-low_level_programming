#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character.
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' & c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}