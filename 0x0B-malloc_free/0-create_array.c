#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with specific
 *		  char
 * @size: The size of the array to be created
 * @c: The charcter that is going to initialize the array
 *
 * Return: NULL if size = 0 or if it fails, else pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
