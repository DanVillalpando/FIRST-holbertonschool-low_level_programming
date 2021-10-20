#include <stdio.h>
#include "main.h"
/**
 *strpbrk - search for string
 *Description - returns the string youre looking for
 *Return: the matching string
 **/
char *_strpbrk/*Show strng 's' that appear in 'accept'*/(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int flag = 1;

	while (s[i] != '\0')
	  {
	    j = 0;
	    while (accept[j] != '\0')
	      {
		if (s[i] != accept[j])
		  {
		    flag = 0;
		  }
		else
		  {
		    flag = 1;
		    break;
		  }
		j++;
	      }
	    if (flag == 1)
	      {
		return (s + i);
	      }
	    i++;
	  }
	return (NULL);
}
