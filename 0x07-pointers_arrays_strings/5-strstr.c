#include "main.h"

/**
 * *_strstr -  locates a substring.
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int a;
b = 0;
while (needle[b] != '\0')
b++;
while (*haystack)
{
for (a = 0; needle[a]; a++)
{
if (haystack[b] != needle[b])
break;
}
if (a == b)
{
return (haystack);
}
else
{
haystack++;
}
}
return (NULL);
}
