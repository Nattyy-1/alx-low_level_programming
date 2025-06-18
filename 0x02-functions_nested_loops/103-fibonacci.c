#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 if success, otherwise non-zero
 */
int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int fib = num1 + num2;
	unsigned long int sum = 2;
	unsigned long int temp;

	while (fib < 4000000)
	{
		if (fib % 2 == 0)
			sum += fib;

		temp = fib;

		fib += num2;
		num2 = temp;
	}
	printf("%lu\n", sum);
	return (0);
}
