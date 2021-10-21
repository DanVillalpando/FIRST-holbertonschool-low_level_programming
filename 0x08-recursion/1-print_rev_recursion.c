#include <stdio.h>
#include "main.h"

void _print_rev_recursion/*Print in reverse*/(char *s)
{
  int letra = 0;
  int i = 0;
  char temp;

  while (s[letra] != '\0')
    {
    putchar (letra);
  letra++;
    }
  for (i = 0; i < letra / 2; i++)
    {
      temp = s[i];
      s[i] = s[letra - i - 1];
      s[letra - i - 1] = temp;
    }
}
