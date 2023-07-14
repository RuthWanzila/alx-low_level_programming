#include "main.h"
/**
 * multiply - multiplies two numbers
 * @num1: first number as string
 * @num2: second number as string
 *
 * Return: product of the two numbers as an int
 */
int multiply(char *num1, char *num2)
{
int len1, len2, i, j, carry, sum, *prod;
len1 = 0;
len2 = 0;
sum = 0;
while (num1[len1])
len1++;
while (num2[len2])
len2++;
prod = calloc(len1 + len2, sizeof(int));
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
prod[i + j + 1] += (num1[i] - '0') * (num2[j] - '0') + carry;
carry = prod[i + j + 1] / 10;
prod[i + j + 1] %= 10;
}
prod[i + j + 1] += carry;
}
i = 0;
while (prod[i] == 0 && i < len1 + len2)
i++;
while (i < len1 + len2)
sum = sum * 10 + prod[i];
i++;
free(prod);
return (sum);
}
/**
 * is_valid_number - checks if a string is a valid number
 * @number: string to check
 *
 * Return: 1 if string is valid number, 0 otherwise
 */
int is_valid_number(char *number)
{
int i;
i = 0;
while (number[i])
if (!isdigit(number[i]))
return (0);
i++;
return (1);
}

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: array of command-line argument strings
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2]))
printf("Error\n");
return (98);
int result = multiply(argv[1], argv[2]);
printf("%d\n", result);
return (0);
}
