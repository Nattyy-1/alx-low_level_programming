#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: the base string
 * @s2: the tail string where n bytes are copied from
 * @n: the number of bytes being copied from s2 to s1
 *
 * Return: a pointer to a newly allocated space in memory which contains
 *	   the conctaenated string, if it fails NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_length = 0, s2_length = 0, i, j;
	char *string;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1_length] != '\0')
		s1_length++;

	while (s2[s2_length] != '\0')
		s2_length++;

	if (n >= s2_length)
		n = s2_length;

	string = malloc((s1_length + n + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);

	for (i = 0, j = 0; i < (s1_length + n); i++)
	{
		if (i < s1_length)
			string[i] = s1[i];
		else
		{
			string[i] = s2[j];
			j++;
		}
	}

	string[s1_length + n] = '\0';
	return (string);
}
