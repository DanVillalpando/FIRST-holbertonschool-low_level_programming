#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/***
* function that prints a hash table.
*@ht: hash_table_t
*/void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, i = 0, count = 0;

	if (ht == NULL)
	{
		return;
	}
	size = ht->size;
	printf("{");
	while (i <= size)
	{
		while (ht->array[i] != NULL)
		{
			if (count != 0)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			count++;
			ht->array[i] = ht->array[i]->next;
		}
		i++;
	}
	printf("}\n");
}
