#include <stdio.h>
#include <stdlib.h>

int main/*Arguments 2*/(int argc, char *argv[])
{
  int i = 0;
  if (argv[i] != 0)
    {
for (i = 0; i < argc; i++)
  {
    argc--;
    printf("%d\n", argc);
  }
    }
 return (0);
}
