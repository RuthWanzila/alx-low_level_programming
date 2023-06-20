#include <stdio.h>

/*declare the function*/
void print_alphabet(void);

/**
 *  main - print_alphabet prints lowercase letters
 *
 * Return: void.
 */

int main(void)
{
/*call the function to print the alphabet in lowercase*/
print_alphabet();
return (0);
}
void print_alphabet(void)
{
/*declare a variable*/
char c;
for(c = 'a'; c <= 'z'; ++c)
{
putchar(c);
}
putchar('\n');
}
