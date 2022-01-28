#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/***
 * key_index - function that returns the index of a key.
 * use the hash_djb2 function
 * @key: The key, string
 * @size: The size of the array
*/unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
