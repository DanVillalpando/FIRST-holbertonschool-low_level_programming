#include <stdio.h>
#include "main.h"

void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	  {
	    putchar (s[i]);
	    i++;
	  }
	putchar ('\n');
}
