#include "lists.h"

/**
 * dlistint_len - counts the number of nodes in the doubly linked list
 * @h: the head of the list
 *
 * Return: the number of elements inside the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return node_count;
}
