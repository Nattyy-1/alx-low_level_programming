#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: the string that is converted to upppercase
 *
 * Return: uppercase version of the string s
 */
char *string_toupper(char *s)
{
	int i;
	int offset;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			offset = s[i] - 'a';
			s[i] = 'A' + offset;
		}
	}

	return (s);
}
