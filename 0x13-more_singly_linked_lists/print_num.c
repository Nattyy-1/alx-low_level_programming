#include "lists.h"

/**
 * print_num - prints a number to standard output
 * @num: the number to be printed
 */
void print_num(int num)
{
	unsigned int n;
	char buff[32];
	char lookup[] = "0123456789";
	int i = 0;

	if (num < 0)
	{
		_putchar('-');
		n = -num;
	}
	else
	{
		n = num;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n > 0)
	{
		buff[i++] = lookup[n % 10];
		n /= 10;
	}

	while (i > 0)
		_putchar(buff[--i]);
}

