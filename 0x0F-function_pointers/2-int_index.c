#include "function_pointers.h"

/**
 * int_index - searches for an integer in a given array
 * @array: the array the integer is being searched in
 * @size: the size of the given array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which the cmp function
 *	   does not return 0, if size is <=0 or no element matches it
 *	   returns -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
