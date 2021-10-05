#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*One more header included*/

int main/*Our main function*/(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < '6')
printf("Last digit of %d", n);
printf(" is %10d and is less than 6 and not 0 \n)", n);
else if (n != '0')
printf("Last digit of %d", n);
printf(" is %10d and is less than 6 and not 0 \n", n);
else if (n > '5')
printf("Last digit of %d", n);
printf(" is %10d and is greater than 5 0\n", n);
else (n == '0')
printf("Last digit of %d", n);
printf(" is %10d and is 0\n", n);
/* Trial code numer one */
return (0);
}
