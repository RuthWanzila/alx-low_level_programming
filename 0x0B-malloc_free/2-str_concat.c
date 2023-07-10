#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: s1 or null on failure
 */
char *str_concat(char *s1, char *s2)
{
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

size_t len1 = strlen(s1);
size_t len2 = strlen(s2);

char *res = malloc(len1 + len2 + 1);
if (res == NULL)
return (NULL);

memcpy(res, s1, len1);
memcpy(res + len1, s2, len2);
res[len1 + len2] = NULL;

return (res);
}
