#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: ponter to the string that is being reversed
 */
void print_rev(char *s)
{
	int n = 1;
	char *tmp = s;

	while (*tmp != '\0')
	{
		if (*(tmp + n) == '\0')
		{
			_putchar(*tmp);
			n++;
			tmp = s;
		} else
		{
			tmp++;
		}
	}
}
