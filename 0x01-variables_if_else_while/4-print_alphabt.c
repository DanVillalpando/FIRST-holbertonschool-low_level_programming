#include <stdio.h>
/*Single header*/

int main/*Same main*/(void)
{
char lettr = 'a';
while (lettr <= 'z')
{
for (lettr <= 'z', lettr != 'e' && lettr != 'q')
{
putchar(lettr);
lettr++;
}
}
putchar('\n');
/*Alll except q and e*/
return (0);
/*Return zero*/
}
