#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: character to be located
 * Return:  pointer to the first occurrence of the character c in s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
while (*s)
if (*s == c)
{
return (s);
}
else
{
s++;
}
if (c == '\0')
{
return (s);
}
else
{
return (NULL);
}
}
