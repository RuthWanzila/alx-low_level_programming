#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i;
int j;
i = 0;
if (b == NULL)
{
return (0);
}
for (j = 0; b[j] = '\0'; j++)
{
if (b[j] == '0' || b[j] == '1')
{
i = i * 2 + (b[j] - '0');
}
else
{
return (0);
}
}
return (i);
}
