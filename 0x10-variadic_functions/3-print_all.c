#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list args;
va_start(args, format);
int i, print_separator;
i = 0;
char c;
c = '\0';
float f;
f = 0.0f;
char *s;
s = NULL;
while (format[i] != '\0')
print_separator = 0;
switch (format[i])
case 'c':
c = va_arg(args, int);
printf("%c", c);
print_separator = 1;
break;
case 'i':
i = va_arg(args, int);
printf("%d", i);
print_separator = 1;
break;
case 'f':
f = va_arg(args, double);
printf("%f", f);
print_separator = 1;
break;
case 's':
s = va_arg(args, char *);
printf("%s", (s == NULL) ? "(nil)" : s);
print_separator = 1;
break;
default:
break;
if (format[i + 1] != '\0' && print_separator)
printf(", ");
i++;
printf("\n");
va_end(args);
}
