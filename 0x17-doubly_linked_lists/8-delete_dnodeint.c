#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node given a specific index
 * @index: the position of the node to be deleted
 *
 * Return: 1 if succeeded, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *head_temp;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			*head = NULL;
			return 1;
		}

		temp = *head;
		(*head)->next->prev = NULL;
		*head = (*head)->next;
		free(temp);
		return 1;
	}

	head_temp = *head;
	for (i = 0; head_temp != NULL; i++)
	{
		if (i == index)
		{
			temp = head_temp;
			if (head_temp->next)
				head_temp->next->prev = head_temp->prev;
			head_temp->prev->next = head_temp->next;
			free(temp);
			return (1);
		}

		head_temp = head_temp->next;
	}

	return (-1);
}
