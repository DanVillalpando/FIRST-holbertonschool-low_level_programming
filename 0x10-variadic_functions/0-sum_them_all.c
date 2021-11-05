#include <stdio.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
  unsigned int n;
  int suma, i;
  
  if (n == 0)
    return (0);
  for(i=0; i<n; i++)
    {
      suma = suma + n[i];
    }   
}
