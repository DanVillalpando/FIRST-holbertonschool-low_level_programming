#include <stdio.h>
#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int val = *n;

if (index > sizeof(8) * 8)
return (-1);

val |= (1 << index);

*n = val;

return (1);
}
