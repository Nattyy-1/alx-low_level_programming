#include "main.h"
/**
 *main - prints _putchar, followed by a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
	char nat[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(nat[c]);
	}
	_putchar('\n');

	return (0);
}
