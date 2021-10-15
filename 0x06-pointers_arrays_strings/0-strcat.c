#include <stdio.h>
#include "main.h"

char *_strcat/*print two strings*/(char *dest, char *src)
{
  int i = 0;
  int j = 0;

  while (dest[i] != '\0')
    {
      putchar(dest[i]);
      i++;
    }
  while (src[j] != '\0')
    {
      putchar(src[j]);
      j++;
    }
  putchar('\n');
return (0);
}
