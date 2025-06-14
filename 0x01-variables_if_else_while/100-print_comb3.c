#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 is success, otherwise non-zero
 */
int main(void)
{
	int n = 0;
	int m = 1;

	while (n < 10)
	{
		while (m < 10)
		{
			putchar(n + '0');
			putchar(m + '0');
			if (!(n == 8 && m == 9))
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
		m = n + 1;
	}
	putchar('\n');

	return (0);
}
