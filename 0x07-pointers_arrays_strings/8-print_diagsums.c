#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the usm of the two diagonals of a square matrix
 * @a: the 2d array that is being manipulated
 * @size: size of the 2d array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int right_diag_sum = 0;
	int left_diag_sum = 0;

	for (i = 0; i < size; i++)
		right_diag_sum += a[i][j];

	for (i = 0, j = size - 1; i < size; i++, j--)
		left_diag_sum += a[i][j];

	printf("%d, %d/n", right_diag_sum, left_diag_sum);
}
