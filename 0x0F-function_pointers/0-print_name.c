#include <stdio.h>

void print_name(char *name, void (*f)(char *))
{
  _putchar(*name);
  _putchar(f);
}
