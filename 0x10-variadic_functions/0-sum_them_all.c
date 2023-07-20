#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of extra parameters
 * Return: sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
int num;
unsigned int i;
va_list add;
va_start(add, n);
num = 0;

if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
num += va_arg(add, int);
}
va_end(add);
return (num);
}
