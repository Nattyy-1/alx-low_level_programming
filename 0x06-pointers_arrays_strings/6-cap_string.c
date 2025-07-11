#include "main.h"

/**
 * cap_string - captitalizes all words of a string
 * @s: the string that is being altered
 *
 * Return: the final capitalized string
 */
char *cap_string(char *s)
{
	int i;
	int offset;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
		{
			offset = s[i] - 'a';
			s[i] = 'A' + offset;
			continue;
		}

		if (s[i] == ',' || s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		    s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
		    s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' ||
		    s[i] == '}')
		{
			if (s[i + 1] != '\0' && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
				offset = s[i + 1] - 'a';
				s[i + 1] = 'A' + offset;
			}
		}
	}

	return (s);
}
