#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything based on the format specifier.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
char current_format;
va_start(args, format);
while (format && format[i])
{
current_format = format[i];
switch (current_format)
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
break;
default:
break;
}
if (format[i + 1] && (current_format == 'c' || current_format == 'i' || current_format == 'f' || current_format == 's'))
printf(", ");
i++;
}
printf("\n");
va_end(args);
}
