#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/***
 * Returns the sum of all the data (n) of a linked list.
 */int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
