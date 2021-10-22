#include <stdio.h>
#include <stdlib.h>

int main/*Arguments multiplication*/(int argc, char *argv[])
{
int i = 0;
int sum = 0;

if (argv[i] == 0)
    printf("0\n");

 for (i = 1; i < argc; i++)
   {
     if (argv[i] >= 'a' || argv[i] <= 'z')
       {
	 printf("Error\n");
       }
     else
       {
	 sum += atoi(argv[i]);
	 printf("%d\n", sum);
       }
   }
return (0);
}
