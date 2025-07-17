#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the string being concatenated to the destination
 *
 * Return: (dest) which is the concatenated string pointer
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;
	int j;
	int i;
	int k = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (src[src_len] != '\0')
		src_len++;

	j = src_len + dest_len;

	for (i = dest_len; i < j; i++)
	{
		dest[i] = src[k];
		k++;
	}
	dest[i] = '\0';

	return (dest);
}
