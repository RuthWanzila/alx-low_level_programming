#include "main.h"

/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: argument
 * @av: argument
 * Return: NULL if ac == 0 or av == NULL and
 *  a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, len;
len = 0;

if (ac == 0 || av == NULL)
{
return (NULL);
}

for (i = 0; i < ac; i++)
{
len += strlen(av[i]) + 1;
}


str = (char *)malloc(len *sizeof(char));
if (str == NULL)
{
return (NULL);
}

for (i = 0, j = 0; i < ac; i++)
{
strcpy(str + j, av[i]);
j += strlen(av[i]);
str[j++] = '\n';
}
str[j] = '\0';

return (str);
}
