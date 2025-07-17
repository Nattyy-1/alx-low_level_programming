#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the destination for the copied bytes
 * @src: the source for the bytes being copied
 * @n: the number of bytes that are being copied from src to dest
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
