#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void jack_bauer(void);
int main (void)
{
  int minutos = 00, horas = 00;
  while (horas == 23)
    {
      minutos++;

      if (minutos == 59)
	{
	  minutos=00;
	  horas++;
        }
      putchar(horas);
      putchar(':');
      putchar(minutos);
      putchar('\n');
    }
  return (0);
}

