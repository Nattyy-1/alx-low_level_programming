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

			if (val < 10)
			{
				_putchar(val + '0');
			} else
			{
				int first_num = val / 10;
				int last_num = val % 10;

				_putchar(first_num + '0');
				_putchar(last_num + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			} else
			{
				_putchar(' ');
			}

			j++;
		}
		_putchar('\n');
		i++;
	}
}
