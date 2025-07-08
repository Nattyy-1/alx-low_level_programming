#include "main.h"

/**
 * _strncpy - copies the first n bytes from src to dest
 * @dest: the string that is copied to
 * @src: the string that is being copied
 * @n: the number of bytes being copied
 *
 * Return: (dest) pointer to the final string that is obtained after copying
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
