#include <stdio.h>
#include "main.h"

void print_alphabet_x10(void);
int main(void)
{
  char alph[26] = "abcdefghijklmnopqrstuvwxyz";
  int j = 0;
  for (int j = 0; j < 10; j++)
      {
        for (int i = 0; i < 26; i++)
          {
           _putchar(alph[i]);
          }
        _putchar('\n');
      }
    return (0);
}
