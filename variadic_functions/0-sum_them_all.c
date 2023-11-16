#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0;
	unsigned int x, i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		x = va_arg(args, unsigned int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
