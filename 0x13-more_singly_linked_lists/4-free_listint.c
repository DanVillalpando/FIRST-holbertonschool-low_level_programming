#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/***
 * Free listint_t
 */void free_listint(listint_t *head)
{
listint_t *temp;

if (head == NULL)
return;
while (head->next != NULL)
{
temp = head->next;
free(&head->n);
head = temp;
}

free(head);
}
