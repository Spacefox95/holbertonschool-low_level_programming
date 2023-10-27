#include"main.h"

/**
 * print_chessboard - print a chessboard
 * @a: i don't know
 * Return: nice chessboard
 *
 */

void print_chessboard(char (*a)[8])
{
	int y, x;

	for (y = 0; y < 8 ; y++)
	{
		for (x = 0 ; x < 8 ; x++)
		{
			_putchar(a[y][x]);
		}
	_putchar('\n');
	}
}


