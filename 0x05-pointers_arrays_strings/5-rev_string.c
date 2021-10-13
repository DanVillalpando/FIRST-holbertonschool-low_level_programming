#include "main.h"
#include <stdio.h>

void rev_string/*Print in reverse*/(char *s)
{
int largo = 0;
int i;
char temp;

while (s[largo] != '\0')
 {
  largo++;
 }
for (i = 0; i < largo / 2; i++)
 {
  temp = s[i];
  s[i] = s[largo - i - 1];
  s[largo - i - 1] = temp;
 }
}
