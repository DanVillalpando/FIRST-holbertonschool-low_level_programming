#include <stdio.h>
#include "main.h"
/***
 * Returns the number of bits you would need
* to flip to get from one number to another.
 */unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int i = 0;
unsigned long int numb = 0;

numb = n ^ m;
while (numb > 0)
{
if ((numb & 1) == 1)
i++;
numb >>= 1;
}
return (i);

}
