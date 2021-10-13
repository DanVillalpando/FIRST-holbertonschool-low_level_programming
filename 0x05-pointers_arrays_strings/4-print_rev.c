#include "main.h"
#include <stdio.h>

void print_rev/*The frase in reverse*/(char *s)
{
  int lgo = 0;
  
  while (s[lgo] != '\0')
    {
      putchar(lgo);
      lgo++;
    }
}

{
    //Initializing variable.
    char str[100];
    char rev[100];
    int i, j, len=0;
    
    //Accepting input.
    printf(" Enter a string: ");
    gets(str);
    //Calculating length.
    len = strlen(str);
    
    //Reversing and printing the string using for loop. 
    printf("The reverse string is: ");
    for(i = len - 1; i >= 0; i--) 
    {
         printf("%c", str[i]);
    }
    
    return 0;
