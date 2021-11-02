#include <stdlib.h>
#ifndef __HEADER__
#define __HEADER__
#define ABS(x) (x)
#if ABS <= 1
int x;
int x = abs(ABS(x));
printf("%d\n", x);
#endif
#if ABS(x) == 0
printf("0");
#endif
#endif
