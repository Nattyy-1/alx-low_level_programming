#include "main.h"

/**
 * sqrt_helper - calcuates the square root of a number
 * @n: the number we are finding square root for
 * @root: the root of the number
 *
 * Return: the natural root of the number if it exists, else -1
 */
int sqrt_helper(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (sqrt_helper(n, root + 1));
}

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number square root is calculated for
 *
 * Return: the square root of the number n, if it doesn't have a natural square
 *	   -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 0));
}
