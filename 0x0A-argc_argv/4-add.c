#include <stdio.h>
#include <stdlib.h>

int main/*Arguments multiplication*/(int argc, char *argv[])
{
int i = 0;
int sum = 0;

 if (argc > 1)
   {
     for (i = 1; i < argc; i++)
       {
	 sum += atoi(argv[i]);
       }
	   printf("%d\n", sum);
	   if (argc == 0)
	     {
	       printf("0\n");
	     }
   }
return (0);
}
