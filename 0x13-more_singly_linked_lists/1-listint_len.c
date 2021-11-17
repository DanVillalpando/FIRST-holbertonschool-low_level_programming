#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*** listint_len - print number of elements in a linked
 */size_t listint_len(const listint_t *h)
{
size_t number = 0;

while (h != NULL)
{
h = h->next;
number++;
}
return (number);
}
