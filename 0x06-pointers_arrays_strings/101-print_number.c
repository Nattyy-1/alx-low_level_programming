#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer that is being printed
 */
void print_number(int n)
{
	unsigned int num;
	unsigned int temp;
	int pow = 1;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	} else
	{
		num = n;
	}

	temp = num;

	while (temp >= 10)
	{
		temp = temp / 10;
		pow *= 10;
	}

	while (pow > 1)
	{
		_putchar((num / pow) + '0');
		num = num % pow;
		pow = pow / 10;
	}

	_putchar(num + '0');
}
