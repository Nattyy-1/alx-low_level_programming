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
	unsigned long int sum = num1 + num2;
	int n = 0;

	printf("%lu, %lu, %lu, ", num1, num2, sum);

	while (n < 47)
	{
		unsigned long int temp = sum;

		sum += num2;
		num2 = temp;
		printf("%lu", sum);

		if (n != 46)
			printf(", ");
		n++;
	}
	return (0);
}
