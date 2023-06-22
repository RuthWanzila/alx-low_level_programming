#include <stdio.h>
/**
* main -  program that prints either number
* or fizz or buzz or fizzBuzz
* Return: returns 0
*/
int main(void)
{
int num1;
while (num1++ < 100)

if ((num1 % 3) == 0)
{
printf("Fizz ");
}

else if ((num1 % 5) == 0)
{
printf("Buzz ");
}
else if ((num % 3 == 0) && (num % 5 == 0))
printf("FizzBuzz ");
else if (num1 != 100)
printf("Buzz ");

else
printf("Buzz");
}

else
printf("%d ", num1);

printf("\n");
return (0);
}
