#include <stdio.h>

/**
 * main - prints the programs name followed by a new line
 * @argc: the number of arguments passed to main
 * @argv: the set of arguments passed to main
 *
 * Return: 0 if sucess, otherwise non-zero
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
