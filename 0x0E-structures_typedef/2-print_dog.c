#include <stdio.h>
#include "dog.h"
/***
 *Print the struct dog
 *Return void
 */void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else if (d->age == 0)
{
printf("Age: 0\n");
}
else if (d->owner == NULL)
{
printf("Owner: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
}
