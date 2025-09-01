#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a list
 * @head: pointer to pointer to head
 * @index: the index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *delete_node;
	unsigned int node_count;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		if (*head == NULL)
			return (-1);

		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	temp = *head;
	for (node_count = 0; temp != NULL && node_count != index - 1; node_count++)
		temp  = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	delete_node = temp->next;
	temp->next = delete_node->next;
	free(delete_node);
	return (1);
}
