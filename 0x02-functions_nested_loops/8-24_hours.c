#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void jack_bauer(void);
int main (void)
{
  int minutos = 0, horas = 0;
  
  while (horas == 23)
    {
      minutos++;

      if (minutos == 59)
	{
	  minutos=0;
	  horas++;
	}
      putchar("%.2d:%.2d", horas, minutos);
      putchar('\n');
    }
  return (0);
}

