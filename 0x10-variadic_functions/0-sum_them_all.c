#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/***
 *
 *
 */int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int suma;
va_list sumat;

va_start(sumat, n);
if (n == 0)
return (0);
i = 0;
while (i < n)
{
suma = suma + va_arg(sumat, int);
i++;
}
va_end(sumat);
return (suma);
}
