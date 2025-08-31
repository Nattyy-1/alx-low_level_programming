#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t linked list
 * @head: pointer to pointer to head
 *
 * Return: the head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (head == NULL || *head == NULL)
		return 0;

	tmp = *head;
	num = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (num);
}
