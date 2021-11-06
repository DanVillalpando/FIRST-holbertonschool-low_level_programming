#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/***
 *Print the string
 *
 */void print_strings(const char *separator, const unsigned int n, ...)
{
va_list value;
unsigned int i;
char *str;

va_start(value, n);

for (i = 0; i < n; i++)
{
str = va_arg(value, char *);
if (str != NULL)
{
printf("%s", str);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
else
{
printf("(nil)");
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
}
va_end(value);
printf("\n");
}
