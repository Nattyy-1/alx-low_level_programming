#include "lists.h"
#include "print_num.c"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		print_num(h->n);
		_putchar('\n');
		h = h->next;
	}

	return (node_count);
}
