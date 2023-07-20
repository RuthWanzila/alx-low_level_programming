#include "3-calc.h"

/**
 * main - Entry point. Performs simple operations.
 * @argc: The number of arguments passed.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
char *op;
if (argc != 4)
{
printf("Usage: %s <num1> <operator> <num2>\n", argv[0]);
return (1);
}
num1 = atoi(argv[1]);
op = argv[2];
num2 = atoi(argv[3]);
if (op[1] != '\0')
{
printf("Error: Operator must be a single character\n");
return (1);
}
switch (*op)
{
case '+':
result = op_add(num1, num2);
break;
case '-':
result = op_sub(num1, num2);
break;
case '*':
result = op_mul(num1, num2);
break;
case '/':
result = op_div(num1, num2);
break;
default:
printf("Error: Unknown operator `%c'\n", *op);
return (1);
}
printf("%d\n", result);
return (0);
}
