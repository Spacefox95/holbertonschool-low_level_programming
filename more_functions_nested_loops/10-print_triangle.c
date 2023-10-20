#include"main.h"

/**
 *print_triangle - print
 *@size: ok
 *
 */

void print_triangle(int size)
{
	int h;
	int w;
	int d;

	if (size <= 0)
		_putchar('\n');

	for (h = 1 ; h <= size ; h++)
	{
		for (w = 1 ; w <= size ; w++)
			_putchar(32);
		for (d = 1 ; d <= h ; d++)
			_putchar(35);

	_putchar('\n');
	}
}
