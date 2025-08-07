#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed between strings as a separator
 * @n: the number of stirngs that need to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list li;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(li, n);
	printf("%s", va_arg(li, char *));

	for (i = 1; i < n; i++)
	{
		if (separator != NULL)
			printf("%s%s", separator, va_arg(li, char *));
		else
			printf("%s", va_arg(li, char *));
	}

	printf("\n");
	va_end(li);
}
