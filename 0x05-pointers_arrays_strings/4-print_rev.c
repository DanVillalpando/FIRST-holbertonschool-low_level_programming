#include "main.h"
#include <stdio.h>

void print_rev/*The frase in reverse*/(char *s)
{
int i, len = 0;
int lgo = 0;
char temp;

  while (s[lgo] != '\0')
    {
      putchar(lgo);
      lgo++;
    }
  for (i = 0; i < lgo / 2; i++)
    {
      temp = s[i];
      s[i] = s[lgo - i - 1];
      s[lgo - i - 1] = temp;
    }
}

/*Opcion 2*/

 len = s(str);

 for (i = len - 1; i >= 0; i--) 
    {
     putchar(str[i]);
    }
 putchar('\n');
}
