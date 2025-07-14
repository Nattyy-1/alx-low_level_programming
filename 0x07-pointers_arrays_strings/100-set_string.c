#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer which holds the string to be changed
 * @to: pointer that holds the string that will replace the string
 */
void set_string(char **s, char *to)
{
	int count = 0;
	int i;

	while (to[count] != '\0')
		count++;

	for (i = 0; i < count; i++)
	{
		(*s)[i] = to[i];
	}

	(*s)[i] = '\0';
}
