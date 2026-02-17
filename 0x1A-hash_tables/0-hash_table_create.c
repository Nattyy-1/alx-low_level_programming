#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: The size of the array
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;	

	if (size <= 0)
		return NULL;
	
	ht->array = malloc(size * sizeof(hash_node_t);
	if (ht->array == NULL)
		return NULL;

	return ht;
}
