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
	int i, j = 0;

	for (i = 0; str[i] != '0'; i++)
	{
		if (str[i] == " ")
		{
			j++;
			continue;
		}
		letter_count[j]++;
	}

	return (letter_count);
}
