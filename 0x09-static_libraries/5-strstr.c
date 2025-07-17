#include "main.h"
#include <stddef.h>
/**
 * _strstr - finds the first occurrence of the substring needle in the string
 *	     haystack
 * @haystack: the string that is serached in
 * @needle: the substring we want to find
 *
 * Return: a pointer to the beginning of the located substring,
 *	   or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int count = 0;
	int temp;

	while (needle[count] != '\0')
		count++;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		temp = count;

		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;

			temp--;
		}
		if (temp == 0)
			return (haystack + i);
	}

	return (NULL);
}

