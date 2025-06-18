#include "main.h"

/**
 * print_to_98 - prints the numbers starting from the given number to 98
 * @n: the first number to be printed
 *
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 99)
		{
			_putchar(n + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	} else
	{
		while (n > 97)
		{
			_putchar(n + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
}
