#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function.
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list args;
int i;
char *s, *sep;
va_start(args, format);
i = 0;
sep = "";
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 's':
s = va_arg(args, char*);
if (s == NULL)
s = "(nil)";
printf("%s%s", sep, s);
break;
}
sep = ", ";
i++;
}
printf("\n");
va_end(args);
}
