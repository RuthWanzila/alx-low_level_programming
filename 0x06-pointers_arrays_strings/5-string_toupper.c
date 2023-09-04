#include "main.h"

/**
 * string_toupper -  changes all lowercase letters of a string to uppercase.
 * @str: string
 * Return: character
 */
char *string_toupper(char *str)
{
int x = 0;
while (str[x++])
{
if (str[x] >= 'a' && str[x] <= 'z')
str[x] -= 32;
}

return (str);
}
