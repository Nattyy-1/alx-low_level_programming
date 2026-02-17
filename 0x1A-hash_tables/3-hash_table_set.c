#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key (cannot be an empty string)
 * @value: the value associated with the key (cannot be an empty string)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		new_node = create_node(key, value);
		if (new_node == NULL)
			return (0);

		ht->array[index] = new_node;
	}
	else
	{
		current = ht->array[index];
		while (current)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(current->value);
				current->value = strdup(value);
				return (1);
			}
			current = current->next;
		}

		new_node = create_node(key, value);
		if (new_node == NULL)
			return (0);

		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
