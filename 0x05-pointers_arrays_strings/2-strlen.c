#include <stdio.h>
#include <string.h>

int _strlen(char *s)
{
 
 int longui = 0;

 while(s[longui] != '\0')
   {
     longui++;
   }

 return (longui);
 /*Return longuitud*/  
}
