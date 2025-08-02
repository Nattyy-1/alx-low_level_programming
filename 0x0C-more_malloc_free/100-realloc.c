#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer to the new allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	int size, i;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);

	old_size < new_size ? size = old_size : size = new_size;
	for (i = 0; i < size; i++)
		(char *)nptr[i] = (char *)ptr[i];

	free(ptr);
	return (nptr);
}
