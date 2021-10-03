#include <stdio.h>
/*Single header*/

int main/*function with void*/(void)
{
unsigned char bse = '0';
while (bse <= 0xf0)
{
putchar(bse);
bse++;
}
putchar('\n');
/*Printin on hexadecimal*/
return (0);
/*Return zero*/
}
