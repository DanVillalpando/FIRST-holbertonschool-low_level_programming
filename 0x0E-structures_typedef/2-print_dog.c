#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
  if (d == NULL)
    printf ("(nil)\n");
  else
    printf (*d);
}
