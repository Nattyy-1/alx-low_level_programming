#include "lists.h"

/**
 * add_dnodeint - adds a new node a dlistint_t list
 * @head: head of the list
 * @n: the value to be added to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return NULL;

	if (!*head)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;

		*head = new_node;
		return (new_node);
	}
	
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
