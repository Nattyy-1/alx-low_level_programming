#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the src string
 * @n: the number of characters being concatenated from src
 *
 * Return: (dest) pointer to the final concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	while (dest[i] != '\0')
		len++

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i + len] =  src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
