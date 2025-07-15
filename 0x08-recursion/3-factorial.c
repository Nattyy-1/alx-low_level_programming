#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: the number that factorial is being calculated for
 *
 * Return: factorial of the given number n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
