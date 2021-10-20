#include <stdio.h>
#include "main.h"

int _pow_recursion(int x, int y)
{
  while (x != 0)
    {
  if (y < 0)
    {
      return (-1);
    }
  if (y <= 1)
    {
      return (1);
    }
  return (x * (y - 1));
    }
}
