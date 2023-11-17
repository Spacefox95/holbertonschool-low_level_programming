#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - print everything
 * @format: an array of chars
 */

void print_all(const char * const format, ...)
{
	va_list args;
	const char *x = format;
	char *j = " ";

	va_start(args, format);

	while (*x)
	{
		switch (*x)
		{
			case 'c':
				{
					char c = va_arg(args, int);
					printf("%c", c);
					break;
				}
			case 'i':
				{
					int i = va_arg(args, int);
					printf("%d", i);
					break;
				}
			case 'f':
				{
					double f = va_arg(args, double);
					printf("%f", f);
					break;
				}
			case 's':
				{
					char *s = va_arg(args, char *);
					printf("%s", (s != NULL) ? s : "(nil)");
					break;
				}
			default:
				break;
		}
		x++;
		if (*j)
		{
			printf(", ");
		}
	}
	va_end(args);
	printf("\n");
}
