#include "lists.h"

/**
 * sum_listint - sums all data(n) of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: if list is empty 0, otherwise the sum of all the data in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
