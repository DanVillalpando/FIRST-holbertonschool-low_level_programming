#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/***
*Returns the number of elements in a linked listint_t list
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
