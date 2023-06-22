#include <stdio.h>
/**
*main -  for multiples of three print Fizz, for the multiples of five print Buzz and for  multiples of both three and five print FizzBuzz.
*
*Return: returns 0 
*/
int main(void)
{
int num1;
while (num1++ < 100)

if ((num1 % 3) == 0)
printf("Fizz ");
 ((num1 % 3 == 0) && (num1 % 5 == 0))
printf("FizzBuzz ");

else 

else if ((num1 % 5) == 0)
{
if (num1 != 100)
printf("Buzz ");

else
printf("Buzz");
}

else
printf("%d ", num1);

printf("\n");
return (0);
}
