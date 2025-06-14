#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 if success, otherwise non-zero
 */
int main(void)
{
	int n = 0;
	int m = 1;
	int x = 2;

	while (n < 8)
	{
		m = n + 1;
		while (m < 9)
		{
			x = m + 1;
			while (x < 10)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(x + '0');

				if (!(n == 7 && m == 8 && x == 9))
				{
					putchar(',');
					putchar(' ');
				}
				x++;
			}
			m++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
