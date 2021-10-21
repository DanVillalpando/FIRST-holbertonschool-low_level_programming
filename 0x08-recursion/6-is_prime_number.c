#include <stdio.h>
#include "main.h"

int primeN(int n, int i);

int is_prime_number(int n)
{
  return (primeN(n, 1));
}

int primeN(int n, int i)
{
  int prime = i;

  if (prime % i == 0)
    return (0);

  if (prime == n)
    return (i);

  return (primeN(n, i + 1));
}
