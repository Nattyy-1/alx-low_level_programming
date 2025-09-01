#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to head
 * @idx: the index where the new node is going to be inserted
 * @n: the data to be inserted in the new node
 *
 * Return: address of the new node if successful, NULL if it failed or it
 *     is not possible to add the node at that idx
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	for (i = 0; temp != NULL && i < idx - 1; i++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}

