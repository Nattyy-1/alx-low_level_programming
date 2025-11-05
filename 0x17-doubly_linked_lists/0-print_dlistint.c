#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the head of the doubly linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;
	const dlistint_t *head = h;

	while (head != NULL)
	{
		node_count++;
		printf("%d\n", head->n);
		head = head->next;
	}

	return (node_count);
}
