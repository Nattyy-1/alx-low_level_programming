#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return:  0 if success, otherwise non-zero
 */
int main(void)
{
	int n = 0;
	int sum = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum += n;
		n++;
	}
	printf("%d\n", sum);

	return (0);
}
