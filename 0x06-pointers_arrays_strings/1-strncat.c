#include "main.h"

/**
 *_strncat - concatenates two strings pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *@n: number of elements to concatenate in
 * Return: returns pointer to @dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a, b;
for (a = 0; dest[a] != '\0'; a++)
;
for (b = 0; src[b] != '\0' && n > 0; b++, n--, i++)
{
dest[a] = src[b];
}
return (dest);
}
