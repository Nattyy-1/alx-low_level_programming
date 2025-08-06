#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each
 *		    element of an array
 * @array: the array that is being manipulated
 * @size: the size of the array
 * @action: pointer to the function being used on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !array)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
