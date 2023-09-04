#include "main.h"
#include <stdio.h>
/**
*print_array - print n element of array
*@a: array
*@n: number of elements
*Return: nothing
*/
void print_array(int *a, int n)
{
int k;
for (k = 0; k < n ; k++)
{
if (k != n - 1)
printf("%d, ", a[k]);
else
printf("%d", a[k]);

}
printf("\n");
}
