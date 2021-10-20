#include <stdio.h>
#include "main.h"

int _strlen_recursion(char *s)
{
  int i = 0;

  if (s[i] != '\0')
    {
      i++;
    }
  return (i);
}
