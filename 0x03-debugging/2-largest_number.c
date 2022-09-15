#include "main.h"
/**
 * largest_number - returns the largest of three numbers
 *@a: first integer
 *@b: second integer
 *@c: third integer
 *return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = a;
	}
	else
		largest = c;
	return (0);
}
