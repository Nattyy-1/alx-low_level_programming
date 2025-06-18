#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			int val = i * j;

			if (j == 0)
			{
				_putchar(val + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				if (val < 10)
				{
					_putchar(' ');
					_putchar(val + '0');
				} else
				{
					_putchar((val / 10) + '0');
					_putchar((val % 10) + '0');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
