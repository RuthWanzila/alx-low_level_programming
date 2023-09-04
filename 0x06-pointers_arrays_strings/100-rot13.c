#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: pointer to the string
 *
 * Return: pointer to the resulting string
 */
char *rot13(char *s)
{
int i, j;
char rot13_letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13_numbers[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; rot13_letters[j] != '\0'; j++)
{
if (s[i] == rot13_letters[j])
{
s[i] = rot13_numbers[j];
break;
}
}
}
return (s);
}
