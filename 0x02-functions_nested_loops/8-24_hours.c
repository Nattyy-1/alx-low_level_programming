#include "main.h"

/**
 * jack_bauer - prints every minute of the day of jack bauer
 */
void jack_bauer(void)
{
	int i = 0;

	while (i < 24)
	{
		int j = 0;

		while (j < 60)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
			} else
			{
				int last_digit = i % 10;
				int first_digit = i / 10;

				_putchar(first_digit + '0');
				_putchar(last_digit + '0');
			}
			_putchar(':');

			if (j < 10)
			{
				_putchar('0');
				_putchar(j + '0');
			} else
			{
				int last_digit = j % 10;
				int first_digit = j / 10;

				_putchar(first_digit + '0');
				_putchar(last_digit + '0');
			}
			_putchar('\n');
			j++;
		}
		i++;
	}
}
