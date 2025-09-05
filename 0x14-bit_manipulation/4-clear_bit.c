#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the stream of bits to be manipulated
 * @index: the location of the bit to be switched off
 *
 * Return: 1 if it worked, -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL;

	if (index > 63)
		return (-1);

	mask = ~(1UL << index);
	*n &= mask;
	return (1);
}
