#include "lists.h"
/***
 * Returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index/*Protype*/(listint_t *head, unsigned int index)
{
unsigned int total = 0;

if (head == NULL)
return (0);

while (head != NULL)
{
if (total == index)
return (head);

head = head->next;
total++;
}

return (head);
}
