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
	r = r % 10;
	if (r < 0)
	{
		r = r * -1;
	}
	_putchar(r + '0');
	return (r);
}
