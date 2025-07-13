#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string that is being manipulated
 *
 * Return: pointer to the updated string
 */
char *leet(char *s)
{
	int i;
	int j;
	char replaced_char [] = "aAeEoOtTlL";
	char replacing_char [] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; replaced_char[j] != '\0'; j++)
		{
			if (s[i] == replaced_char[j])
			{
				s[i] = replacing_char[j];
				break;
			}
		}
	}

	return (s);
}
