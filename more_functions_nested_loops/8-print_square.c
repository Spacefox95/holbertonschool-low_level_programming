#include"main.h"

/**
 * print_square - make a square
 * @size: width and height
 *
 */

void print_square(int size)
{
	int w;
	int h;

	for (w = 1 ; w <= size ; w++)
	{
		for (h = 1 ; h <= size ; h++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
