#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
int num;
if (n != 1)
{
if (num % n != 0)
{
return (is_prime_number(num, n - 1));

}
else
{
return (0);
}
}
else
{
return (1);
}
}
