#include <stdio.h>

/**
*main - Print the alphabet in lowercase letteers, except for e and q
*
*Return: ALWAYS 0 (SUCCESS)
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter != 'e' && letter != 'q')
	putchar(letter);
	}
	putchar ('\n');
	return (0);
}
