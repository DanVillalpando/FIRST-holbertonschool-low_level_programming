#include <stdio.h>
#include "main.h"

int raiz(int n, int i);

int _sqrt_recursion(int n)
{
  return (raiz(n, 1));
}
int raiz(int n, int i)
{
  int e = i * i;

  if (e > n)
    return (-1);

  if (e == n)
    return (i);

  return (raiz(n, i + 1));
}
