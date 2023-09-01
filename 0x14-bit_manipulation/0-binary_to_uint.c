#include "main.h"

/**
 *  * binary_to_uint - converts a binary number to an unsigned int
 *   * @b: pointer to a string of 0 and 1 chars
 *    * Return: converted number, or 0 if
 *     * there is one or more chars in the string b that is not 0 or 1
 *      * b is NULL
 *       */
unsigned int binary_to_uint(const char *b)
{
unsigned int res, x;
int y;
if (b == NULL)
return (0);
for (y = 0; b[y]; y++)
{
if (b[y] != '0' && b[y] != '1')
return (0);
}
for (x = 1, res = 0, y--; y >= 0; y--, x *= 2)
{
if (b[y] == '1')
res += x;
}
return (res);
}
