#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/***
 *Free the dogs
 *xc
 */void free_dog(dog_t *d)
{
free(d);
}
