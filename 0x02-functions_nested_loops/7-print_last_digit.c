#include "main.h"

/**
 * print_last_digit - prints the last digit of a given number
 * @n: the number that we want to extract the last digit of
 *
 * Return: the last digit of the given number
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		_putchar('-');
		_putchar((last_digit) + '0');
		return (last_digit);
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
