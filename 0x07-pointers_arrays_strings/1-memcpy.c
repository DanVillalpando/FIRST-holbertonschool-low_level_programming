#include <stdio.h>
#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
  *dest = n;
  *src = n;
  src = dest;
  return (dest);
}
