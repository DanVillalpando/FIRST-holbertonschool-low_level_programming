#include <stdio.h>
#include "main.h"
/***
 * Prints the binary representation of a number.
 */void print_binary(unsigned long int n)
{
if (n == 0)
_putchar('0');
else
{
print_binary((n >> 1));
if ((n & 1) == 1)
_putchar('1');
if ((n & 1) == 0)
_putchar('0');
}
}
