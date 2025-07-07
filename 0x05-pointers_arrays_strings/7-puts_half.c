#include "main.h"

/**
 * puts_half - prints second half of a string followed by a new line
 * @str: pointer to the string that is being printed
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
	{
		for (i = len - 1; i >= len / 2; i--)
			_putchar(str[i]);
	} else
	{
		for (i = len - 1; i > (len - 1) / 2; i--)
			_putchar(str[i]);
	}

	_putchar('\n');
}
