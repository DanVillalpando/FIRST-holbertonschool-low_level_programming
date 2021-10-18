#include <stdio.h>
#include "main.h"

char *_strchr(char *s, char c)
{
  if (c != *s)
    {
      s = NULL;
    }
  else
    *s = c;
  return (s);
}
