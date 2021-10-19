#include <stdio.h>
#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
  unsigned int i;
  i = 0;
  for (i = 0; i < )
    {
      dest[i] = src;
      i++;
    }
  //Guardar en un temp y copiar
  *dest = n;
  *src = n;
  src = dest;
  return (dest);
}
