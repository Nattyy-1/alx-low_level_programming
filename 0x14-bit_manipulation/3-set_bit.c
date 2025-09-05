#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the stream of bits that where the bit will be set
 * @index: the specific location where the bit will be set
 *
 * Return: 1 if it worked, -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL;

	if (index > 63)
		return (-1);

	mask = 1UL << index;
	*n |= mask;
	return (1);
}
