#include <stdio.h>
#include "main.h"

int _strcmp/*Compare strings*/(char *s1, char *s2)
{
  int a = 0;

  if (s1[a] < s2[a])
    {
     putchar(a);
      a++;
    }
  else if (s1[a] > s2[a])
    {
     putchar(a);
      a++;
    }
  else
    putchar('0');
  return (0);
}
