#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: the format string for the formatting
 */
void print_all(const char * const format, ...)
{
	int i = 0, printed_any = 0;
	va_list li;
	char *s;

	va_start(li, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
			case 'i':
			case 'f':
			case 's':
				if (printed_any)
					printf(", ");
				printed_any = 1;
				break;
		}

		switch (format[i])
		{
			case 'c':
				printf("%c", (char)va_arg(li, int));
				break;
			case 'i':
				printf("%d", va_arg(li, int));
				break;
			case 'f':
				printf("%f", va_arg(li, double));
				break;
			case 's':
				printf("%s", (s = va_arg(li, char *)) ? s : "(nil)");
				break;
		}
		i++;
	}
	va_end(li);
	printf("\n");
}

