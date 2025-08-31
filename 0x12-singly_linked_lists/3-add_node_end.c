#include "lists.h"

/**
 * _strlen - counts the number of characters in a given string
 * @str: the string to be counted
 *
 * Return: the number of chars in the string
 */
unsigned int _strlen(const char *str)
{
	unsigned int count = 0;

	if (str == NULL)
		return (0);

	while (str[count] != '\0')
		count++;
	return (count);
}
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer to head
 * @str: the string to be inserted to the list
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t **head_next;

	if (*head == NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);

		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}
	if ((*head)->next == NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);

		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		(*head)->next = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	head_next = &((*head)->next);
	return (add_node_end(head_next, str));
}
