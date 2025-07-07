#include "main.h"

/**
 * print_array - prints n elements of a array of integers followed by a newline
 * @a: the pointer to the array
 * @n: the number of elements in the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int num = a[i];
		int temp, pow = 1, digit;

		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}
		if (num <= 9)
		{
			_putchar(num + '0');
		}
		else
		{
			temp = num;
			while (temp >= 10)
			{
				temp /= 10;
				pow *= 10;
			}
			while (pow > 0)
			{
				digit = num / pow;
				_putchar(digit + '0');
				num %= pow;
				pow /= 10;
			}
		}
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

