#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: s1 or null on failure
 */
char *str_concat(char *s1, char *s2)
{
int a, b;
for (a = 0; s1[a] != '\0'; a++)
;
for (b = 0; s2[b] != '\0'; b++)
{
s1[a+b] =s2[b];
}
return (s1);
}
