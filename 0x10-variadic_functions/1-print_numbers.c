#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/***
 *Print numbers
 *
 */void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list tlist;
int res;
unsigned int i;

va_start(tlist, n);
i = 0;
while (i < n)
{
res = va_arg(tlist, int);
printf("%d", res);
if (i < n - 1 && (separator != NULL))
{
printf("%s", separator);
}
i++;
}
printf("\n");
va_end(tlist);
}
