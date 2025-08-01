#include <stdlib.h>
#include <stddef.h>
#include "main.h"
#include "_wordcount.c"
#include "_lettercount.c"

/**
 * strtow - splits a string into words
 * @str: the string that needs to be split
 *
 * Return: NULL if str is NULL or empty or the funtion fails,
 *	   else pointer to an array of strings
 */
char **strtow(char *str)
{
	int word_count, i, j = 0, k = 0;
	int *letter_count;
	char **strings;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word_count = _wordcount(str);
	letter_count = calloc(word_count, sizeof(int));
	if (letter_count == NULL)
		return (NULL);

	letter_count = _lettercount(letter_count, str);
	strings = malloc((word_count + 1) * sizeof(char *));
	if (strings == NULL)
		return (NULL);
	for (i = 0; i < word_count; i++)
	{
		strings[i] = malloc((letter_count[i] + 1) * sizeof(char));
		if (strings[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(strings[j]);
			return (NULL);
		}
	}
	strings[word_count] = NULL;
	free(letter_count);
	for (i = 0, j = 0, k = 0; str[k] != '\0'; k++, j++)
	{
		if (str[k] == ' ')
		{
			strings[i][j] = '\0';
			i++;
			j = 0;
			continue;
		}
		strings[i][j] = str[k];
	}
	return (strings);
}
