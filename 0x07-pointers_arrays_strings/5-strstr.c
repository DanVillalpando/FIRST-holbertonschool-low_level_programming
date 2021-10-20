#include <stdio.h>
#include "main.h"

char *_strstr/*Count string*/(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int flag = 1;

	while (haystack[i] != '\0')
	  {
	    j = 0;
	    while (needle[j] != '\0')
	      {
		if (haystack[i + j] != needle[j])
		  {
		    flag = 0;
		  }
		else
		  {
		    flag = 1;
		  }
		j++;
	      }
	    if (flag == 1)
	      {
		return (haystack + i);
	      }
	    i++;
	  }
	return (NULL);
}
