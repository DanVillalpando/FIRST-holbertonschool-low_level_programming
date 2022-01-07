#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/***
 * Frees a list.
 */void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	if (head != NULL)
	{
		while (head != NULL)
		{
			temp = head;
			head = (head)->next;
			free(temp);
		}
	}
}
