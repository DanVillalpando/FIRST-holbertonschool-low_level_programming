#include <stdio.h>
#include <stdlib.h>

int main/*Arguments*/(int argc, char *argv[])
{
  int i = 0;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
  return (0);
}
