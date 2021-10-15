#include <stdio.h>
#include "main.h"

char *_strncat/*Almost the same*/(char *dest, char *src, int n)
{
  int i = 0;
  int j = 0;

  while (dest[i] != '\0')
    {
      putchar(dest[i]);
      i++;
    }
  while (src[j] != n)
    {
      putchar(src[j]);
      j++;
    }
  putchar('\n');
return (0);
}
