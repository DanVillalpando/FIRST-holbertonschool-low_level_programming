#include <stdio.h>
#include "main.h"

void times_table(void);
int main(void)
{
  int i = 0, j;
  int n = 9, r;
  while (i<10)
    {
      j = 0;
      while (j<10)
	{
	  putchar('9');
	  putchar(',');
	  putchar('\t');
	  j++;
	  
	}
      putchar('\n');
      i++;
    }
  return (0);
}
