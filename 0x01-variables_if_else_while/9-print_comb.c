#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 if success, otherwise non-zero
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
