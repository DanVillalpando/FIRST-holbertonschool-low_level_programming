#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/***
 * Adds a new node at the beginning of a list.
 */dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n;

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->prev = NULL;
	new_n->next = *head;
	if (*head != NULL)
		(*head)->prev = new_n;
	*head = new_n;

	return (new_n);
}
