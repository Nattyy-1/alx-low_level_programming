#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments passed to the function
 * @av: the collection of arguments passed to the function
 *
 * Return: NULL if ac is 0 or av is NULL or if it fails,
 *	   esle a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j, k = 0;
	int count;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
	}

	count++;
	string = malloc(count * sizeof(char));

	if (string == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			string[k++] = av[i][j];
		string[k++] = '\n';
	}

	string[k] = '\0'
	return (string);
}
