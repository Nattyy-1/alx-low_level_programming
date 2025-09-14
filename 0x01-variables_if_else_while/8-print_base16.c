#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0 if succesful, otherwise non-zero
 */
int main(void)
{
	int n = 0;
	char hex = 'a';

	while (n < 16)
	{
		if (n >= 10)
		{
			putchar(hex);
			hex++;
			n++;
		}
		else
		{
			putchar(n + '0');
			n++;
		}
	}

	putchar('\n');
	return (0);
}
