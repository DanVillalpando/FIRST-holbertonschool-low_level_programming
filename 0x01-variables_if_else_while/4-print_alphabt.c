#include <stdio.h>
/*Single header*/

int main/*Same main*/(void)
{
char lettr = 'a';
while (lettr <= 'z')
{
putchar(lettr != 'e' || lettr != 'q');
lettr++;
}
putchar('\n');
/*Alll except q and e*/
return (0);
/*Return zero*/
}
