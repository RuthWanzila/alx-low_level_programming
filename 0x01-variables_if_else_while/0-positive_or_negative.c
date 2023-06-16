#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int n;
srand(time(0));
/*seed the random number generator*/
n = rand();
int lastDigit = n % 10;
/*get the last digit of n*/
printf("Last digit of %d ", n);
if (lastDigit > 5)
{
printf("is greater than 5\n");
}
else if (lastDigit == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
