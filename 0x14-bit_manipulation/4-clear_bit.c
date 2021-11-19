#include <stdio.h>
#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int valu = *n;

if (index > sizeof(8) * 8)
return (-1);

valu &= ~(1 << index);

*n = valu;

return (1);
}
