#include "lists.h"

/**
 * print_list_helper - prints a give list of type list_t
 * @h: head of the linked list
 * @node_count: the number of nodes encountered so far
 *
 * Return: the number of nodes in the list
 */
size_t print_list_helper(const list_t *h, size_t *node_count)
{
	if (h == NULL)
	{
		return (*node_count);
	}

	(*node_count)++;
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	} else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	return (print_list_helper(h->next, node_count));
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	print_list_helper(h, &node_count);
	return (node_count);
}

