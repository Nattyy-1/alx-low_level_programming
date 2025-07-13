#include "main.h"
#include "stddef.h"

/**
 * _strpbrk - locates the first occurrence in the string s of any of the bytes
 *	      in the string accept
 * @s: the string being checked
 * @accept: the substring
 *
 * Return: a pointer to the byte in s that matahces one of the bytes in accept,
 *	   or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}
