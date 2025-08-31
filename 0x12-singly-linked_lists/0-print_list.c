#include "lists.h"

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
