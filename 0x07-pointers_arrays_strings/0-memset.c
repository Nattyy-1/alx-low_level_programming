#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the memory area we want to fill parts of
 * @b: the constant byte that is going to fill the memory
 * @n: the number of bytes from s that we are going to fill
 *
 * Return: pointer to the updated s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
