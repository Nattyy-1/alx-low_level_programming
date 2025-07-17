#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * is_number - checks if a given string is a number
 * @s: the string that is being checked
 *
 * Return: 1 if is number otherwise 0
 */
int is_number(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (isdigit(s[i]))
		{
			i++;
			continue;
		} else
		{
			return (0);
		}
	}

	return (1);
}
/**
 * main - adds positive numbers
 * @argc: the number of arguments
 * @argv: the numbers to be added
 *
 * Return: 1 if one of the number contains symbols that are not digits, else 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc < 2)
	{
		printf("0\n");
	} else
	{
		for (i = 1; i < argc; i++)
		{
			if (is_number(argv[i]))
			{
				sum += atoi(argv[i]);
				continue;
			} else
			{
				printf("Error\n");
				return (1);
			}
		}

		printf("%d\n", sum);
	}

	return (0);
}
