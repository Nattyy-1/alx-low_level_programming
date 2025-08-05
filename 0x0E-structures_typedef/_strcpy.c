#include <stddef.h>
#include "dog.h"


/**
 * _strcpy - copies a given string
 * @dest: destination of the copied string
 * @src: source of the string
 *
 * Return: pointer to the newly copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL || src == NULL)
		return (src);

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
