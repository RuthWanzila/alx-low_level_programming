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
int i = 0, letter;
char *string;
float fl;

va_start(valist, format);
while (format && format[i])
{
letter = format[i];
switch (letter)
{
case 'c':
printf("%c", va_arg(valist, int));
break;
case 'i':
printf("%d", va_arg(valist, int));
break;
case 'f':
fl = va_arg(valist, double);
printf("%f", fl);
break;
case 's':
string = va_arg(valist, char*);
if (string == NULL)
{
printf("(nil)");
}
else
printf("%s", string);
break;
default:
break;
}
if (format[i + 1] != '\0')
printf(", ");
i++;
}
printf("\n");
va_end(valist);
}
