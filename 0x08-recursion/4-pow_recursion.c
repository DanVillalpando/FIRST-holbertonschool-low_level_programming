#include <stdio.h>
#include "main.h"

int _pow_recursion(int x, int y)
{
  int m;
  
  if (y < 0)
    {
      return (-1);
    }
  if (y == 0)
    {
      return (1);
    }
  if (y > 0)
    m = x * _pow_recursion(x, y - 1);
  return (m);
}
