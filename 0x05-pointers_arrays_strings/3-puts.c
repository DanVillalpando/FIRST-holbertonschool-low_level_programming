#include "main.h"
#include <stdio.h>

/**
 *Despcription: prints a string followed by a new line
 *Return: String
 **/

void _puts(char *str)
{
  int letra = 0;

  while(str[letra] != '\0')
    {
      putchar(str[letra]);
      letra++;
    }
  putchar('\n');
}
