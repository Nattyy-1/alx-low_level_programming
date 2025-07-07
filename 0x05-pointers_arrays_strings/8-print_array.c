#include "main.h"

/**
 * print_array - prints n elemnts of an array of integers followed by a newline
 * @a: the pointer for the array
 * @n: the number of elements in the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		_putchar(a[i]);
		_putchar(',');
		_putchar(' ');
	}

	_putchar(a[n - 1]);
	_putchar('\n');
}
