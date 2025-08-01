#include "main.h"

/**
 * init_array - initializes an array to zero
 * @arr: the array to be initialized
 * @size: the size of the array
 *
 */
void init_array(int *arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
		arr[i] = 0;
}
