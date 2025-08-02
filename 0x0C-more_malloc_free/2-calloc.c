#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _calloc - allocated memory for an array of nmemb elements of size bytes each
 * @nmemb: number of elements of the array
 * @size: the size of each element in the array
 *
 * Return: pointer to the allocated memory, if nmemb or size is zero or
 *	   function fails then it returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 ||  size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}

	return ((void *)ptr);
}
