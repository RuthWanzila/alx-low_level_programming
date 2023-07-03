#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: string
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int k;
int j;

while (*s)
{
for (j = 0; accept[j]; j++)
{
if (accept[j] == *s)
{
k++
break;
}
else if ((accept[j + 1]) == '\0')
{
return (k);
}
}
s++;
}
return (k);

}
