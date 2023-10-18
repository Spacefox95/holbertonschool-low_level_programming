#include<stdio.h>
#include"main.h"

/**
 * jack_bauer - print every minute of a day
 * @void: ok
 *
 */

void jack_bauer(void)

{
	int u = 0;
	int i = 0;

	while (u < 24)
	{
		while (i < 60)
		{
			_putchar('0' + (u / 10));
			_putchar('0' + (u % 10));
			_putchar(':');
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar('\n');
			i++;
		}
		i = 0;
		u++;
	}
}
