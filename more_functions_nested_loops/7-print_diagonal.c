#include"main.h"

/**
 * print_diagonal - print character in diag
 * @n: number of line
 *
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 1 ; a <= n ; a++)
		{
			for (b = 1 ; b < a ; b++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
