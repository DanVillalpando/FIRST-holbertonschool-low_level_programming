#include <stdio.h>
#include "main.h"

char *_memset/*Fill the memory*/(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	  {
	    s[i] = b;
	    i++;
	  }
	return (s);
}
