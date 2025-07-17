#include "main.h"

/**
 * _isalpha - checks if a given character is alphabetic character
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
