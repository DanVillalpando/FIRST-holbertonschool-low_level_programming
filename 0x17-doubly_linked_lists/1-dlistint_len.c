#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/***
 * Returns the number of elements in a linked list.
 */size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
