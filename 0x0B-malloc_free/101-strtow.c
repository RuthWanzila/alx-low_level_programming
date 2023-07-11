#include "main.h"
/**
 * strtow - splits a string into words.
 * @str: string to be splitted
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
{
char *str_out;
int i, j, len; 
len = 0;
if (ac == 0)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
if (av[i] == NULL)
{
return (NULL);
}
for (j = 0; av[i][j] != '\0'; j++)
{
len++;
}
len++;
}
str_out = (char *)malloc((len + 1) * sizeof(char));
if (str_out == NULL)
{
free(str_out);
return (NULL);
}
for (i = j = 0; j < len; j++)
{
if (av[i][j] == '\0')
{
str_out[j] = '\n';
i++;
j++;
}
if (j < len - 1)
{
str_out[j] = av[i][j];
}
}
str_out[j] = '\0';
return (str_out);
}
