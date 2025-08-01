#include "main.h"


/**
 * _wordcount - counts the number of words in a string
 * @str: the string that words being counted for
 *
 * Return: the number of words in the string
 */
int _wordcount(char *str)
{
	int i = 0;
	int count = 0;
	int in_word = 0;

	if (str == NULL || str[0] == '\0')
		return (0);

	while (str[i])
	{
		if (str[i] != ' ' && in_word == 0)
		{
			in_word = 1;
			count++;
		} else if (str[i] == ' ')
			in_word = 0;
		i++;
	}

	return (count);
}
