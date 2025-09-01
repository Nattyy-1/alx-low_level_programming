#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to head
 * @idx: the index where the new node is going to be inserted
 * @n: the data to be inserted in the new node
 *
 * Return: address of the new node if successful, NULL if it failed or it
 *	   is not possible to add the node at that idx
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node_count = 1;
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
	{
		if (idx == node_count - 1)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = NULL;
			*head = new_node;
			return (new_node);
		}
	}
	temp = *head;
	while (temp != NULL && node_count <= idx)
	{
		if (node_count != idx)
		{
			node_count++;
			temp = temp->next;
			continue;
		} else
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = (temp)->next;
			(temp)->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
