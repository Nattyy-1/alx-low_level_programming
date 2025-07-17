#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints the moneyber of coins to make change for an amount of money
 * @argc: the moneyber of arguments passed to main
 * @argv: the money that change is being generated for in coinss
 *
 * Return: 1 if more than 1 argument is passed to main, otherwise 0
 */
int main(int argc, char *argv[])
{
	int coins = 0;
	int money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (money > 1)
	{
		if (money >= 25)
		{
			coins += (money - (money % 25)) / 25;
			money %= 25;
		} else if (money >= 10)
		{
			coins += (money - (money % 10)) / 10;
			money %= 10;
		} else if (money >= 5)
		{
			coins += (money - (money % 5)) / 5;
			money %= 5;
		} else
		{
			coins += (money - (money % 2)) / 2;
			money %= 2;
		}
	}
	if (money == 1)
		coins++;
	printf("%d\n", coins);
	return (0);
}
