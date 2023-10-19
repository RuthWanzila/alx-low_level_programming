#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: the character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - checks if a character is alphabetic
 * @c: the character to check
 *
 * Return: 1 if c is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
return (_islower(c) || (c >= 'A' && c <= 'Z'));
}

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a newline
 *                 only if the character is alphabetic
 */
void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; ++c)
{
if (_isalpha(c))
{
_putchar(c);
}
}

_putchar('\n');
}

