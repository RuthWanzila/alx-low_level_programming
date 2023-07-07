#include "main.h"
#include <stddef.h>
/**
 * _strstr -  locates a substring.
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int p;
int q = 0;
while (needle[q] != '\0')
q++;
while (*haystack)
{
for (p = 0; needle[p]; p++)
{
if (haystack[p] != needle[p])
break;
}
if (p != q)
{
haystack++;
}
else
{
return (haystack);
}
}
return (NULL);
}
