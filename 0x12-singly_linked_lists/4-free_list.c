#include "lists.h"
#include <stdlib.h>

/***
 * Frees a list_t list.
 *
*/void free_list(list_t *head)
{
list_t *last;
while (head)
{
last = head->next;
free(head->str);
free(head);
head = last;
}
}
