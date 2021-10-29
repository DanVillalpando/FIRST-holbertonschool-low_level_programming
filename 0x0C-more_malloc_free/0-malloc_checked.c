#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void *malloc_checked/*Use of malloc*/(unsigned int b)
{
void *new;
new = malloc(b);
if (new == NULL)
exit(98);
return (new);
}
