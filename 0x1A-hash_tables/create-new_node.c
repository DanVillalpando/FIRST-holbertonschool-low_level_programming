#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/***
* create a new hash_node_t
*@key: const char
*@value: const char
*/hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
		return (0);
	node->value = strdup(value);
	if (node->value == NULL)
		return (0);
	node->next = NULL;
	return (node);
}
