#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function.
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list valist;
int i, j;
char *sep = "";
va_start(valist, format);
i = 0;
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(valist, int));
break;
case 'i':
printf("%s%d", sep, va_arg(valist, int));
break;
case 'f':
printf("%s%f", sep, va_arg(valist, double));
break;
case 's':
j = va_arg(valist, char *);
if (j == NULL)
{
printf("%s(nil)", sep);
break;
}
printf("%s%s", sep, j);
break;
}
sep = ", ";
i++;
}
printf("\n");
va_end(valist);
}
