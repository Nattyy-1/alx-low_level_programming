#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string being reversed
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	int j;
	char tmp;

	while (s[len] != '\0')
		len++;

	for (j = len - 1; j > (len / 2) - 1; j--, i++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
