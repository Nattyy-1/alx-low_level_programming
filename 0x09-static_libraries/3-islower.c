#include "main.h"

/**
 * _islower - checks whether a given character is lower case or not
 * @c: the character to be checked
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
