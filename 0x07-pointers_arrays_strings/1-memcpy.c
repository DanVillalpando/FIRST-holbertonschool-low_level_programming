#include <stdio.h>
#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
  int i = 0;
  int j = 0;

  if (n != 0)
    {
  while (src[i] != '\0')
    {
      while (dest[j] != '\0')
	{
	  src[i + 1] = dest[j + 1];
	  j++;
	}
      i++;
    }
    }
  return (dest);
}
