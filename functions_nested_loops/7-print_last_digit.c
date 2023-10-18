#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print the last number
 * @r: character to check
 * Return: (n) is the answer
 *
 */

int print_last_digit(int r)
{
	int n;

	if (r < 0)
	{
		r = r * -1;
	}
	n = r % 10;
	_putchar(n + '0');
	return (n);
}
