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
unsigned int len1, len2, x, y;
len1 = 0;
len2 = 0;
char *concatenated;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
{
n = len2;
}
concatenated = malloc(sizeof(char) * (len1 + n + 1));
if (concatenated == NULL)
{
return (NULL);
}
for (x = 0; x < len1; x++)
{
concatenated[i] = s1[i];
}
for (y = 0; x < n; y++, x++)
{
concatenated[x] = s2[y];
concatenated[x] = '\0';
}
return (concatenated);
}
