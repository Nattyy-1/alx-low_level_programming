#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s : the string being manipulated
 *
 * Return: pontinter to the string that has been changed
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] <= 'z' && s[i] >= 'a'))
			s[i] = ((s[i] - 'a' + 13) % 26) + 'a';
		else if (s[i] <= 'Z' && s[i] >= 'A')
			s[i] = ((s[i] - 'A' + 13) % 26) + 'A';
	}

	return (s);
}
