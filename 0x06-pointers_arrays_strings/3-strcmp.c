#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: positive if s1 > s2, negative if s1 < s2, 0 otherwise
 */
int _strcmp(char *s1, char *s2)
{

	int s1_len = 0;
	int s2_len = 0;
	int i;

	while (s1[s1_len] != '\0')
		s1_len++;

	while (s2[s2_len] != '\0')
		s2_len++;

	if (s1_len <  s2_len)
		return (-1);

	if (s1_len > s2_len)
		return (1);

	for (i = 0; i < s1_len; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		} else
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);
}
