#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 if success, otherwise non-zero
 */
int main(void)
{

	char c = 'a';
	char b = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
