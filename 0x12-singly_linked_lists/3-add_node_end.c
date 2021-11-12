#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/***
 *Count character in string
 *
 */int _strlen(const char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/***
  *Adds a new node at the end
  *
  */list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *temp;

if (str != NULL)
{
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
new->len = _strlen(str);
new->next = NULL;

if (*head == NULL)
{
*head  = new;
return (*head);
}
else
{
temp = *head;
while (temp->next)
temp = temp->next;

temp->next = new;
return (temp);
}
}

return (NULL);
}
