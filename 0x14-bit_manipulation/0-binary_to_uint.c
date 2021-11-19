#include <stdio.h>
#include "main.h"
/***
 * Converts a binary number to an unsigned int.
 */unsigned int binary_to_uint(const char *b)
{
unsigned int binary = 0;
int i;

if (b == NULL)
return (0);

for (i = 0; b[i] != '\0'; i++)
{
if (b[i]  != '0' && b[i] != '1')
return (0);
}
for (i = 0; b[i] != '\0'; i++)
{
binary = binary * 2;
if (b[i] == '1')
binary = binary + 1;
}
return (binary);
}
