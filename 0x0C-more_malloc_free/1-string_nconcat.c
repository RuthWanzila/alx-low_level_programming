#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes
 * Return: NULL for failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, x;
len1 = n;
char *concatenated;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (x = 0; s1[x]; x++)
{
len1++;
}
concatenated = malloc(sizeof(char) * (len1 + 1));
if (concatenated == NULL)
return (NULL);
len1 = 0;
for (x = 0; s1[x]; x++)
{
concatenated[len1++] = s1[x];
}
for (x = 0; s2[x] && x < n; x++)
concatenated[len1++] = s2[x];
concatenated[len1] = '\0';

return (concatenated);
}
