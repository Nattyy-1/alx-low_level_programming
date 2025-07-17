#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it recieves
 * @argc: the number of arguments passed to main
 * @argv: the arguments passed to main
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
