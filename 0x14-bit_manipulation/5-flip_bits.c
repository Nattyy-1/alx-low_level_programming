#include "main.h"

/**
 * flip_bits - returns the number of bits needed to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of flips needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;

	while (n != m)
	{
		if ((n & 1UL) != (m & 1UL))
			count++;	
		n >>= 1;
		m >>= 1;
	}

	return (count);
}
