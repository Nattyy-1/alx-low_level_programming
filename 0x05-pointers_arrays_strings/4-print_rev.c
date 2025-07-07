#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: ponter to the string that is being reversed
 */
void print_rev(char *s)
{
	int n = 1;
	int  printed = 0;
	char *tmp = s;

	while (*(s + printed) != '\0')
		printed++;

	while (printed > 0)
	{
		tmp = s;

		while (*(tmp + n) != '\0')
			tmp++;

		_putchar(*tmp);
		n++;
		printed--;
	}

	_putchar('\n');
}
