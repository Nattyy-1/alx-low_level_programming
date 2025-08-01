#include "main.h"

/**
 * _lettercount - counts each words length and stores it in an array
 * @letter_count: the array that is going to hold each words length
 * @str: the string that is being checked
 *
 * Return: the array containing the count of each word
 */
int *_lettercount(int *letter_count, char *str)
{
	int i = 0, j = 0;
	int in_word = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			letter_count[j]++;
			in_word = 1;
		} else if (in_word)
		{
			in_word = 0;
			j++;
		}
		i++;
	}

	return (letter_count);
}
