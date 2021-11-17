#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/***
 * Prints all the elements of a listint_t list.
 */size_t print_listint(const listint_t *h)
{
size_t i = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
