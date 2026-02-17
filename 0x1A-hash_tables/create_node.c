#include "hash_tables.h"

/**
 * create_node - creates a new node and initializes the node properties
 *
 * @key: the key attribute of the node
 * @value: the value attribute of the node
 *
 * Return: a pointer to the new node created
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	if (key == NULL || value == NULL)
		return (NULL);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;

	return (new_node);
}
