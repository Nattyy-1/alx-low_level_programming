#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer that is being printed
 */
void print_number(int n)
{
	int temp;
	int pow = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	temp = n;

	while (temp >= 10)
	{
		temp = temp / 10;
		pow *= 10;
	}

	while (pow > 1)
	{
		_putchar((n / pow) + '0');
		n = n % pow;
		pow = pow / 10;
	}

	_putchar(n + '0');
}
