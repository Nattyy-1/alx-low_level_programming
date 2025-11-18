#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: the head of the list
 * @index: the index of the item to be retrieved
 *
 * Return: the nth node if index exists, else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (!head)
		return NULL;

	temp = head;
	for (i = 0; temp != NULL; i++)
	{
		if (i == index)
			return temp;

		temp = temp->next;
	}

	return NULL;
}
