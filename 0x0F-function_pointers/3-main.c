#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - runs a simple calculator on the passed arguments
 * @argc: the number of arguments
 * @argv: the argument list containing the numbers and the desired operation
 *
 * Return: 0 if success, never returns if an error occurs (exits with status)
 */
int main(int argc, char **argv)
{
	int num1;
	int num2;
	int result;
	op_t calc;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
	   && argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	
	calc.op = argv[2];
	calc.f = get_op_func(argv[2]);
	result = calc.f(num1, num2);
	printf("%d\n", result);

	return (0);
}
