#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the sum of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: the first  number
 * @b: the second number
 *
 * Return: the difference of the two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the product of the two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the quotient of the two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the remainder of a divided by b
 * @a: the first number
 * @b: the second number
 *
 * Return: the remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
