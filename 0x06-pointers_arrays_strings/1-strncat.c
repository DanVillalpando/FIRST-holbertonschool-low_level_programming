#include <stdio.h>
#include "main.h"

char *_strncat/*Almost the same*/(char *dest, char *src, int n)
{
  int i = 0;
  int j = 0;

  while (dest[i] != '\0')
    {
     i++;
    }
  while (src[j] != n && src[j] < n)
    {
     dest[i + j] = src[1];
     j++;
    }
 return (0);
}
