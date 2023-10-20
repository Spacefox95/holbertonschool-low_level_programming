#include"main.h"

/**
 * more_numbers - print numbers 10 times
 *
 */

void more_numbers(void)
{
	char a;
	int b;

	for (b = 1; b <= 10 ; b++)
	{
		for (a = 0; a <= 14 ; a++)
		{
			if (a / 10 > 0)
			{
				_putchar('0' + (a / 10));
			}
			_putchar('0' + (a % 10));
		}
		_putchar('\n');
	}
}

