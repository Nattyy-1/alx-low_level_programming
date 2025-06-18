#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 if success, otherwise non-zero
 */
int main(void)
{
	int num1 = 1;
	long int num2 = 2;
	long int sum = num1 + num2;
	int n = 0;

	printf("%d, %lu, %lu, ", num1, num2, sum);

	while (n < 48)
	{
		int temp = sum;

		sum += num2;
		num2 = temp;
		printf("%lu", sum);

		if (n != 47)
			printf(", ");
		n++;
	}
	return (0);
}
