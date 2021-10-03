#include <stdio.h>
/*Same simple header*/

int main/*Again our main function*/(void)
{
char lettr = 'a', Clettr = 'A';
while (lettr <= 'z')
{
putchar(lettr);
lettr++;
}
while (Clettr <= 'Z')
{
putchar(Clettr);
Clettr++;
}
/*Printing Caps and lower*/
return (0);
}
