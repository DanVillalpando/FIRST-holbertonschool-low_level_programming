#include <stdio.h>
#include "main.h"
/**
*_strspn - returns
*Description
*Return:
**/

unsigned int _strspn(char *s, char *accept)
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
          if (flag == 0)
            {
              return (i);
            }
          i++;
        }
        return (i);
}
