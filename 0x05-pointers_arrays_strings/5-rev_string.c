#include <stdio.h>
#include "main.h"

/**
 *rev_string -  reverses a string.
 *@s: value to be evaluated.
 *Return: void
 */

void rev_string(char *s)
{
char str;
int i, X, X1;
X = 0;
X1 = 0;
while (s[X] != '\0')
{
X++;
}
X1 = X - 1;
for (i = 0; i < X / 2; i++)
{
str = s[i];
s[i] = s[X1];
s[X1--] = str;
}
}
