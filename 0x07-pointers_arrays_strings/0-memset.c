#include <stdio.h>
#include "main.h"

char *_memset/*Fill the memory*/(char *s, char b, unsigned int n)
{
  *s = b;
  b = n;
  return (s);
}
