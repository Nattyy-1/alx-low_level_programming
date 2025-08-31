#include "lists.h"


/**
 * _strlen - counts the number of characters in a string
 * @str: the string to be checked
 *
 * Return: the number of characters in a string
 */
unsigned int _strlen(const char *str)
{
	int count = 0;

	if (str == NULL)
		return (0);

	while (str[count] != '\0')
		count++;

	return (count);
}
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: the head of the linked list
 * @str: the string that needs to be inserted in the list
 *
 * Return: the address of the new element, of NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
