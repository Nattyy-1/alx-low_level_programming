#include "main.h"

/**
 * get_bit - gets a value of a bit given at an index
 * @n: contains the stream of bits
 * @index: the exact place of the bit we want to check
 *
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL;

	if (index > 63)
		return (-1);

	mask = 1UL << index;
	return ((n & mask) >> index);
}
