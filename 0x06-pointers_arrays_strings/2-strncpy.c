#include "main.h"

/**
 * _strncpy - copies the string pointed to by src
 * @dest: string
 * @src: string
 * @n: number of characters to copy over
 * Return: copied to string (edited)
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
