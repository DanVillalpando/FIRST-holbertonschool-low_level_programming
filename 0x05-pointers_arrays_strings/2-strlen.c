#include <stdio.h>
#include <string.h>

int _strlen/*Print the lenght*/(char *s)
{
int longui = 0;

while (s[longui] != '\0')
   {
    longui++;
   }
return (longui);
}
