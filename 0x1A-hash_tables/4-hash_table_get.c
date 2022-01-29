#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/***
* function that retrieves a value associated with a key or NULL
*@ht: hash_table_t
*@key: const char
*/char *hash_table_get(const hash_table_t *ht, const char *key)
{

	hash_node_t *ptr;
	char *value = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	if (ptr == NULL)
	{
		return (NULL);
	}
	value = strdup(ptr->value);
	return (value);
}
