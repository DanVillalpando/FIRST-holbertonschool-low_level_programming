#include <stdio.h>
#include "lists.h"
/***
 *Returns the number of elements in the linked list_t
 *
 */size_t list_len(const list_t *h)
{
size_t elements = 0;
while (h)
{
elements++;
h = h->next;
}
return (elements);
}
