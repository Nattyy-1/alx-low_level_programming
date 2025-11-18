#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: pointer to the head of the list
 * @idx: the position at which the node should be inserted
 * @n: the value of the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;
	unsigned int i;

	if (!h)
		return NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return NULL;
	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return new_node;
	}

	temp = *h;
	for (i = 0; temp != NULL; i++)
	{
		if (i == idx)
		{
			new_node->next = temp;
			new_node->prev = temp->prev;
			if (temp->prev)
				temp->prev->next = new_node;
			temp->prev = new_node;
			return new_node;
		}
		temp = temp->next;
	}

	if (i == idx)
	{
		temp = *h;
		while (temp->next)
			temp = temp->next;
		new_node->next = NULL;
		new_node->prev = temp;
		temp->next = new_node;
		return new_node;
	}

	free(new_node);
	return NULL;
}

