#include "main.h"
#include <ctype.h>

/**
 * _islower - checks whether a given character is lower case or not
 * @c: the character to be checked
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
