#include <stdio.h>
#include "main.h"

void _puts_recursion/*Puts*/(char *s)
{
if (s[0] != '\0')
  {
	putchar(s[0]);
	_puts_recursion(s + 1);
	}
	  else
	    {
	      putchar('\n');
	    }
}
