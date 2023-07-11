#include "main.h"
/**
 * strtow - splits a string into words.
 * @str: string to be splitted
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
int a, c, b, k, count, m, word;
char **p;
char *x;
c = 0;
b = 0;
a = 0;
count = 0;
if (*str == '\0' || str == NULL)
return (NULL);
for (a = 0; str[a] != '\0'; a++)
{
if (str[a] == ' ' && (str[a + 1] != ' ' || str[a + 1] == '\0'))
c++;
}
p = (char **)malloc((c + 1) * sizeof(char *));
if (p == NULL)
return (NULL);
for (word = 0; str[word] && b <= c; word++)
{
count = 0;
if (str[word] != ' ')
{
for (a = word; str[a] != '\0'; a++)
{
if (str[a] == ' ')
break;
count++;
}
*(p + b) = (char *)malloc((count + 1) * sizeof(char));
if (*(p + b) == NULL)
{
for (k = 0; k <= b; k++)
{
x = p[k];
free(x);
}
free(p);
return (NULL);
}
for (m = 0; word < a; word++)
{
p[b][m] = str[word];
m++;
}
p[b][m] = '\0';
b++;
}
}
p[b] = NULL;
return (p);
}
