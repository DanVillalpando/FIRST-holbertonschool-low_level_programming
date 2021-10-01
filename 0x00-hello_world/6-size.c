#include <stdio.h>
/*This program prints the size of various types*/

int main(void)
{
/**variables*/
int c;
unsigned int i;
long unsigned int li;
long long unsigned int ll;
double f;
  
  printf("Size of a char: %c byte(s)\n"), (unsigned char)sizeof((c));
  printf("Size of an int: %u byte(s)\n"), (unsigned int)sizeof((i));
  printf("Size of a long int: %lu byte(s)\n"), (unsigned long int)sizeof((li));
  printf("Size of a long long int: %llu byte(s)\n"), (unsigned long long int)sizeof((ll));
  printf("Size of a float: %f byte(s)\n"), (double)sizeof((f));

  return(0);
}
