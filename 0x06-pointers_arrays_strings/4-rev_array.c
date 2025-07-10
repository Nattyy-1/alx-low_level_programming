#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: that array that is being reversed
 * @n: the size of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;
	int looper = n / 2;

	for (i = 0, j = n - 1; i < looper; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
