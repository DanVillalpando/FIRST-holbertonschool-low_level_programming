#include <stdio.h>
#include "main.h"

int _strlen_recursion(char *s)
{
  int i = 0;

  for (i = 0; s[i] != '\0'; i++)
    {
      putchar (i);
      break;
    }
  return (i);
}

