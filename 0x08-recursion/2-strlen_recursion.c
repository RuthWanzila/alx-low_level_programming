#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
_strlen_recursion(++s);
_putchar(*s);
}
return (s);
}
