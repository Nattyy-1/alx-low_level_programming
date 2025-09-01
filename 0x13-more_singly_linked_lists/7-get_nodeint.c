#include "lists.h"

/**
 * get_nodeint_at_index - finds a node based on the given index
 * @head: pointer to the head of the list
 * @index: the index of the node to be found
 *
 * Return: the nth node of listinit_t linked list if node exists, else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_count = 0;

	while (head != NULL && node_count <= index)
	{
		if (node_count != index)
		{
			node_count++;
			head = head->next;
			continue;
		} else
		{
			return (head);
		}
	}

	return (NULL);
}
