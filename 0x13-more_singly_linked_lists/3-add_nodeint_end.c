#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer to head
 * @n: the data to be inserted at the new node
 *
 * Return: the address of the new element, of NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t **next_node;

	if (*head == NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	if ((*head)->next == NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = NULL;
		(*head)->next = new_node;
		return (new_node);
	}
	next_node = &((*head)->next);
	return (add_nodeint_end(next_node, n));
}
