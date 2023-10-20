#include"main.h"

/**
 *print_triangle - print
 *@size: ok
 *
 */

void print_triangle(int size)
{
	int w, h = 0;
	int blank;

	if (size > 0)
	{
		while (h < size)
		{
			blank = size - h - 1;
			while (w < size)
			{
				if (blank > w)
				{
					_putchar(32);
				}
				else
				{
					_putchar(35);
				}
				w++;
			}
			h++;
			w = 0;
			_putchar ('\n');
		}
	}
	else
		_putchar('\n');
}
