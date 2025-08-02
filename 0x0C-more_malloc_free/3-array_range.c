#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the min value the array should be initialized with
 * @max: the max value the array should go to
 *
 * Return: pointer to the newlly created array, if it fails or min > max
 *	    then NULL
 */
int *array_range(int min, int max)
{
	int size;
	int *array;
	int i;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < max; i++)
		array[i] = min++;

	return (array);
}
