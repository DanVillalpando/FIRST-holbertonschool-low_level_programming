#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/***
 * Adds a new node at the end of a list
 */listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newno, *lastn = *head;
newno = malloc(sizeof(listint_t));

if (newno == NULL)
return (NULL);

newno->n = n;
newno->next = NULL;

if (*head == NULL)
{
*head = newno;
return (*head);
}
while (lastn->next != NULL)
lastn = lastn->next;

lastn->next = newno;

return (*head);
}
