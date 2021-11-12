#include <stdio.h>
#include <string.h>
#include "lists.h"
/***
 *Count string length
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
 *Add a new node at the beginning of a list_t
 */list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;

newNode = malloc(sizeof(list_t));

if (newNode == NULL)
return (NULL);
newNode->str = strdup(str);
newNode->len = _strlen(str);
newNode->next = *head;
*head = newNode;
return (*head);
}
