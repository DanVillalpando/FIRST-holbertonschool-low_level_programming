#include <stdio.h>
#include "main.h"

void reverse_array/*Integers in reverse*/(int *a, int n)
{
  int reve = 0;
  int temp;
  
  while (a[reve] != '0')
    {
      reve++;
    }
  for (n = 0; n < reve / 2; n++)
    {
      temp = a[n];
      a[n] = a[reve - n - 1];
      a[reve - n - 1] = temp;
    }
}
