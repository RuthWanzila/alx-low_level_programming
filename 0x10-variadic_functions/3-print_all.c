#include " variadic_functions.h"
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
char c;
int i, printed;
float f;
char *s;
printed = 0;
while (*format != '\0')
{
if (printed)
printf(", ");
switch (*format)
{
case 'c':
c = va_arg(args, int);
printf("%c", c);
break;
case 'i':
i = va_arg(args, int);
printf("%d", i);
break;
case 'f':
f = va_arg(args, double);
printf("%f", f);
break;
case 's':
s = va_arg(args, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
break;
default:
break;
}
format++;
printed = 1;
}
printf("\n");
va_end(args);
}
