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
	int word_count = 1;

	if (str == NULL || str[0] == '\0')
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == " " && str[i + 1] != '\0')
			word_count++;
	}

	return (word_count);
}
