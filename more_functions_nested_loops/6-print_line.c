#include"main.h"

/**
 * print_line - print line
 * @n: number of line
 *
 */

void print_line(int n)
{
	int j;

	for (j = 1 ; j <= n ; j++)
	{
		_putchar(95);
	}
	_putchar('\n');

	if (n <= 0)
		_putchar('\n');
}
