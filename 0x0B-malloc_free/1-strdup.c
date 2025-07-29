#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _strdup - copies a string given as a parameter
 * @str: The string to be copied
 *
 * Return: NULL if str is NULL or insufficent memory was available, else
 *	   a pointer to a new string which is a duplicate of the string str.
 */
char *_strdup(char *str)
{
	char *string;
	int size = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
	{
		size++;
	}

	string = (char *)malloc((size + 1) * sizeof(char));

	if (string == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		string[i] = str[i];
	}

	string[i] = '\0';

	return (string);
}
