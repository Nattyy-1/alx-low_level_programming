#include <stdio.h>

/**
 * _putchar - prints a character to the standard output
 * @c: character to be printed
 */
void _putchar(char c)
{
	putchar(c);
}

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
