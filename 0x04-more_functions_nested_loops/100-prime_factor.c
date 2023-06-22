#include <stdio.h>

/**
*main - prints the largest prime factor of the number 612852475143
*Return: returns 0
*/

int main(void)
{
long double = 612852475143;
int num1;
while (num1++ < long double / 2)
{
if (long double % num1 == 0)
{
long double /= 2;
continue;
}

for (num1 = 3; num1 < long double / 2; num1 += 2)
{
if (long double % num1 == 0)
long double /= num1;

}
}
printf("%ld\n", long double);
return (0);
}
