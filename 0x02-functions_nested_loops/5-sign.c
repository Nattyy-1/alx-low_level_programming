#include "main.h"

/**
 * print_sign - prints the sign of a given number
 * @n: the number to be checked
 *
 * Return: 1 if it is greater than 0, -1 if it is less than zero,
 *         0 if otherwise
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	_putchar('0');
	return (0);
}
