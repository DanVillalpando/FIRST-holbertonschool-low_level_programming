#include <stdio.h>

void print_name(char *name, void (*f)(char *))
{
  putchar(*name);
  putchar(f(char *));
}
