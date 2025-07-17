#include "main.h"

/**
 * _strcpy - copies a given string from source to destination
 * @dest: the new string formed
 * @src: the original string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
		len++;

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
