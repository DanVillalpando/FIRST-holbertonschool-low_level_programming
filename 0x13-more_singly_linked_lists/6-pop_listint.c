#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/***
 * deletes the head node of a listint_t linked list,
 * and returns the head node’s data
 */int pop_listint(listint_t **head)
{
listint_t *temp;
int data;

if (*head == NULL)
return (0);

temp = *head;
*head = (*head)->next;
data = temp->n;

free(temp);
return (data);
}
