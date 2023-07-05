#include "main.h"

/**
 * is_prime_number - checks if a number is prime
* is_prime_assist - helper function
 * @n: number to be checked
 *  Return: 1 if prime, 0 otherwise
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else if (n <= 3)
{
return (1);
}
else if (n  2 == 0 || n % 3 == 0)
{
return (0);
}
else
{
return (is_prime_assist(n, 5));
}
}
/**
 * is_prime_assist - helper function
 * @n: no.
 * @factor: divisor
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_assist(int n, int factor)
{
if (factor * factor > n)
{
return (1);
}
else if (n % factor == 0 || n % (factor) == 0)
{
return (0);
}
else
{
return (is_prime_assist(n, factor + 6));
}
}
