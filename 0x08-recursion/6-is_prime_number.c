#include "main.h"

/**
 * _is_prime_helper - checks whether a number is  prime or not
 * @n: the number being checked
 * @divisor: the divisor that is used to check if n is divisible by it
 *
 * Return: 1 if the number n is prime, 0 otherwise
 */
int _is_prime_helper(int n, int divisor)
{
	if (divisor < 2)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (_is_prime_helper(n, divisor - 1));
}

/**
 * is_prime_number - checks whether a number is prime or not using
 *		     _is_prime_helper
 * @n: the number being checked
 *
 * Return: 1 if the number n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (_is_prime_helper(n, n - 1));
}
