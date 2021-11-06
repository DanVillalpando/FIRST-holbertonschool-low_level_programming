#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/***
 *Prints a name
 *
 */void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
