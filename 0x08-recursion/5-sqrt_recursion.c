#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: -1 if n doesnt have a natural sqrt
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (_sqrt_helper(n, n / 2));
}
}
/**
* _sqrt_helper - helper function
* _sqrt_recursion - returns the natural square root of a number.
 * @n: number
* @guess: estimate
* Return: sqrt
*/
int _sqrt_helper(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}
else if (guess * guess < n)
{
int next_guess = (guess + n / guess) / 2;
return (next_guess == guess) ? guess : _sqrt_helper(n, next_guess);
}
else
{
return (-1);
}
}
