#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && a > c)
      {
	largest = a;
      }
    if (b > a && b > c)
      {
	largest = b;
      }
    if (c > a && c > b)
      {
	largest = c;
      }
    if (a == b && a == c)
      {
	printf("They´re all equal\n");
      }
    if (b == c && a == 1)
      {
	printf("B and C are equal\n");
      }
    if (a == c && b == 1)
      {
	printf("A and C are equal\n");
      }
    if (a == b && c == 1)
      {
	printf("A and B are equal\n");
      }


    return (largest);
}
