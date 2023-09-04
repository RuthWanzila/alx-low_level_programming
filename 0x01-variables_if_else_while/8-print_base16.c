#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
/*print hexadecimals*/
for (c = '0'; c <= 'f'; ++c)
{
if (c <= '9' || (c >= 'a' && c <= 'f'))
{
putchar(c);
}
}
putchar('\n');
return (0);
}
