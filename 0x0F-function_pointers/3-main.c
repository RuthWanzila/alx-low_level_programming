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
int num1, num2;
int (*op)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);	}
if (argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
op = get_op_func(argv[2]);
if (op == NULL)
{
printf("Error\n");
exit(99);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
printf("%d\n", op(num1, num2));
return (0);
}
