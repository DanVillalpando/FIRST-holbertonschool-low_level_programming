#include <stdio.h>
#include "main.h"

int factorial/*Facctorial*/(int n)
{
if (n < 0)
return (-1);
if (n <= 1)
return (1);
return (n * factorial(n - 1));
}
