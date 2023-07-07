#include "main.h"
#include <stdio.h>

/**
 * main -  adds positive numbers.
 * @argc: count
 * @argv: vendor
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc == 1)
{
printf("0\n");
return (0);
}

int i, sum = 0;
for (i = 1; i < argc; i++)
{
int j = 0;
while (argv[i][j])
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
j++;
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}
