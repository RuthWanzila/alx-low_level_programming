#include <stdio.h>

/**
  * main - Prints the sum of all multiples of 3 or 5 up to 1024
  *
  * Return: Always (Success)
  */
int main(void)
{
int p, r = 0;
while (p < 1024)
{
if ((p % 3 == 0) || (p % 5 == 0))
{
r += p;
}
p++;
}

printf("%d\n", r);
return (0);
}
