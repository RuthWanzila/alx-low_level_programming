#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. Prints the opcodes of its own main function.
 * @argc: The number of arguments passed.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int num_bytes;
int i;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
exit(2);
}
unsigned char *ptr = (unsigned char *)main;
for (i = 0; i < num_bytes; i++)
{
printf("%02x", *(ptr + i));
if (i != num_bytes - 1)
putchar(' ');
}
putchar('\n');
return (0);
}
