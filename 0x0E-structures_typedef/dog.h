#ifndef __HEADER__
#define __HEADER__
#include <stdio.h>

/***
*struct First struct
*@dog Name of the struct
*Dog info
*/ struct/*g*/ dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
