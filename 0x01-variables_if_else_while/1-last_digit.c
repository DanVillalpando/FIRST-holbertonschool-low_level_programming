#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*One more header included*/

int main/*Our main function*/(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < '6' && n != '0')
{
printf("Last digit of %d is %10d and is less than 6 and not 0\n)", n, n);
}
else if (n > '5')
{
printf("Last digit of %d is %10d and is greater than 5\n", n, n);
}
else
{
printf("Last digit of %d is %10d and is 0\n", n, n);
}
/* Trial code numer one */
return (0);
}
