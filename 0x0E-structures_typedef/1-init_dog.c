#include <stdio.h>
#include "dog.h"
/***
 *Initialize the variable
 *struct dog
*/void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
