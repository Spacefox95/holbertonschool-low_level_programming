#include"main.h"
#include<stdio.h>

/**
 * print_numbers - print numbers in line
 * @void: ok
 *
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);

	_putchar('\n');
}
