#include "main.h"

int main(void)
{
int* a = 98;
int* b = 42;
int temp = *a;

*a = *b;
*b = temp;

return (0); 
}
