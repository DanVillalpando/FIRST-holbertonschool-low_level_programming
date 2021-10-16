#include <stdio.h>
#include "main.h"

char *_strcat/*print two strings*/(char *dest, char *src)
{
  int i = 0;
  int j = 0;

  while (dest[i] != '\0')
    {
     i++;
    }
  while (src[j] != '\0')
    {
      dest[i + j] = src[j];
      j++;
    }
 return (dest);
}
