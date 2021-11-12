#include <stdio.h>
#include <string.h>
#include "lists.h"
/***
 *Add a new node at the beginning of a list_t
 *
 */list_t *add_node(list_t **head, const char *str)
{
char *dd;
int i;
list_t *NewNode;

NewNode = malloc(sizeof(list_t));
if (NewNode == NULL)
{
return (NULL);
}
dd = strdup(str);
if (dd == NULL)
{
free(NewNode);
return (NULL);
}
for (i = 0; str[i];)
i++;

NewNode->str = dd;
NewNode->i = i;
NewNode->next = *head;

*head = NewNode;

return (NewNode);
}
