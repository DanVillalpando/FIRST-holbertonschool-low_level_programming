#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void *malloc_checked(unsigned int b)
{
  int *b;
    
  b = malloc(sizeof(unsigned int));
  *b = 5;
  if (b == NULL)
    putchar(98);
}
