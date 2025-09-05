#include "main.h"

/**
 * _putchar - prints a character to standard output
 * @c: the char to be printed
 *
 * Return: the char to be printed
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (c);
}
