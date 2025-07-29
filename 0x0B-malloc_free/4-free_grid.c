#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a two dimenstional grid passed to it
 * @grid: the 2d array
 * @height: the height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
