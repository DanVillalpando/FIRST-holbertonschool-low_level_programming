#include <stdio.h>
#include <stdlib.h>

int main/*Arguments multiplication*/(int argc, char *argv[])
{
int i = 0;
int mult = 0;
 
 for (i = 1; i < argc; i++)
   {
     printf("%d\n", mult);
     mult = i * i;
   }
  if (argv[i] == 0)
    printf("Error\n");
return (0);
}
