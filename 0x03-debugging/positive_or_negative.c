#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*The headers*/

int main/** main - remains the same*/(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
  printf(" %d is negative \n", n);
}
else if (n > 0)
{
  printf(" %d is positive \n", n);
}
else
{
  printf(" %d is zero \n", n);
}
/*My code that checks positives, negative or zero*/
return (0);
/*return: Always 0*/
}
