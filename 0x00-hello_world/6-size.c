#include <stdio.h>
/*One header*/

int main/*Main function*/(void)
{
int c = '1';
int i = '4';
int li = '4';
int lli = '8';
int f = '4';
/*variables*/
printf("Size of a char: % d byte(s)\n", c);
printf("Size of an int: % d byte(s)\n", i);
printf("Size of a long int: % d byte(s)\n", li);
printf("Size of a long long int: % d byte(s)\n", lli);
printf("Size of a float: % d byte(s)\n", f);
/*Prints size*/
return (0);
/*Returns zero*/
}
