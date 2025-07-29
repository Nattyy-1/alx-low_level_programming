#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: NULL on failure or if either width/height is zero or negative,
 *	   else pointer to the 2 dimensional array created
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(width * height * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			array[i][j] = 0;
	}

	return (array);
}
