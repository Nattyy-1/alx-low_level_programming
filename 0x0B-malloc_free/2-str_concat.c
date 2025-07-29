#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the head string
 * @s2: the tail string
 *
 * Return: NULL on failure, else newly allocated space in memory which
 *	   contains the contents of s1, followed by the contents of s2
 */
char *str_concat(char *s1, char *s2)
{
	char *string;
	int s1_size = 0;
	int s2_size = 0;
	int i, j;

	while (s1[s1_size] != '\0')
	{
		s1_size++;
	}

	while (s2[s2_size] != '\0')
	{
		s2_size++;
	}

	string = (char *)malloc((s1_size + s2_size + 1) * sizeof(char));

	if (string == NULL)
		return (NULL);

	for (i = 0; i < s1_size; i++)
	{
		string[i] = s1[i];
	}

	for (i = s1_size, j = 0; i < (s1_size + s2_size); i++)
	{
		string[i] = s2[j];
	}

	string[s1_size + s2_size] = '\0';

	return (string);
}
