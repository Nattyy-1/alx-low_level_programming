#include "main.h"
/**
 *_abs - returns an absoulute value of an integer
 *@n: integer ffrom which to get an absolute value
 *Return: void
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
