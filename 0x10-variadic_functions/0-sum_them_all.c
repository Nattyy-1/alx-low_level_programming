#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums the given parameters
 * @n: the number of arguments
 *
 * Return: the sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list it;
	int sum = 0;

	va_start(it, n);

	for (i = 0; i < n; i++)
		sum += va_arg(it, int);

	va_end(it);

	return (sum);
}
