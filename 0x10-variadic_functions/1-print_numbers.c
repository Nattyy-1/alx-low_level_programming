#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of digits that need to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list li;

	va_start(li, n);
	printf("%d", va_arg(li, int));

	for (i = 1; i < n; i++)
	{
		if (separator != NULL)
			printf("%s%d", separator, va_arg(li, int));
		else
			printf("%d", va_arg(li, int));
	}

	printf("\n");
	va_end(li);
}
