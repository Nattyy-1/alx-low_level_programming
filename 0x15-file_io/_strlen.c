#include "main.h"

/**
 * _strlen - counts the number of characters in a given string
 * @str: the string to be checked
 *
 * Return: the number of chars in the string
 */
unsigned int _strlen(char *str)
{
	unsigned int count = 0;

	while (str[count] != '\0')
		count++;

	return (count);
}
