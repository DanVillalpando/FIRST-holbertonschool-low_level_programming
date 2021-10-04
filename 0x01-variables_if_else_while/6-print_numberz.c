#include <stdio.h>
/*Simple header*/

int main/*Main with void*/(void)
{
int numbz = '0';
while (numbz <= '9')
{
putchar(numbz);
numbz++;
}
putchar('\n');
/*Does the same but with putchar*/
return (0);
/*Return zero*/
}
