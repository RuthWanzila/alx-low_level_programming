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
int num1;
int num2;
int result;
int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op_func = get_op_func(argv[2]);
result = op_func(num1, num2);
printf("%d\n", result);
return (0);
}
