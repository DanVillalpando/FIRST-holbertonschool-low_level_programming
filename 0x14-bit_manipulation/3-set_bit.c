#include <stdio.h>
#include "main.h"
/***
 * Sets the value of a bit to 1 at a given index.
 */int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int val = *n;

if (index > sizeof(8) * 8)
return (-1);

val |= (1 << index);

*n = val;

return (1);
}
