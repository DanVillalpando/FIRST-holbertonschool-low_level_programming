#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/***
 * function that gives you the index of a key.
 * use the hash_djb2 function
 */unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
