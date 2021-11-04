#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/***
 *Creating a new dog
 *Return NULL when fail
 */dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog_t;

dog_t = malloc(sizeof(dog_t));
if (dog_t == NULL)
return (NULL);
dog_t->name = name;
dog_t->age = age;
dog_t->owner = owner;
return (dog_t);
}
