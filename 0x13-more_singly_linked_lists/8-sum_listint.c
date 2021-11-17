#include "lists.h"
/***
 * Returns the sum of all the data (n) of a listint_t linked list
 */int sum_listint(listint_t *head)
{
unsigned int suma = 0;

if (head == NULL)
return (0);

while (head != NULL)
{
suma += head->n;
head = head->next;
}

return (suma);
}
