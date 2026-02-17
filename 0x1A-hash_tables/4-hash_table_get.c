#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value from a hash table
 *
 * @ht: the hash table
 * @key: the key we will use for lookup
 *
 * Return: the value associated with the given key, NULL if doesn't exist
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	current_node = ht->array[index];
	while (current_node)
	{
		/* Extra safety: ensure key is not NULL before strcmp */
		if (current_node->key != NULL && strcmp(current_node->key, key) == 0)
			return (current_node->value);

		current_node = current_node->next;
	}

	return (NULL);
}

