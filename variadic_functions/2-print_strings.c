#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - prints strings
 * @separator: the string to be printed between strings
 * @n: number of strings passed in the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *x;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		x = va_arg(args, char *);
		printf("%s", (x != NULL) ? x : "(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
