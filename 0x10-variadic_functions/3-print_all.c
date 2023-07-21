#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_char - prints a char
 * @arg: the va_list argument
 */
void print_char(va_list arg)
{
printf("%c", va_arg(arg, int));
}
/**
 * print_int - prints an integer
 * @arg: the va_list argument
 */
void print_int(va_list arg)
{
printf("%d", va_arg(arg, int));
}
/**
 * print_float - prints a float
 * @arg: the va_list argument
 */
void print_float(va_list arg)
{
printf("%f", va_arg(arg, double));
}

/**
 * print_string - prints a string
 * @arg: the va_list argument
 */
void print_string(va_list arg)
{
char *str;
str = va_arg(arg, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list args;
int i, j;
char *separator;
i = 0;
j = 0;
separator = "";
print_fn_t print_fn[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{'\0', NULL}
};
va_start(args, format);
while (format && format[i])
{
j = 0;
while (print_fn[j].type)
{
if (print_fn[j].type == format[i])
{
printf("%s", separator);
print_fn[j].fn(args);
separator = ", ";
break;
}
j++;
}
i++;
}
printf("\n");
va_end(args);
}
