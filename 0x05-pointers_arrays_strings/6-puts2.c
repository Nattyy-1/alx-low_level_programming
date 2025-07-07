#include "main.h"

/**
 * puts2 - prints every other character of a string, staring with the first
 *	   character
 * @str: pointer to the string that characters are to be printed from
 */
void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
