#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string that we are going to search the character from
 * @c: the character that is being searched
 *
 * Return: a pointer to the first  occurrence of the character c
 *	   if not found NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s[i]);
	}

	return (NULL);
}
