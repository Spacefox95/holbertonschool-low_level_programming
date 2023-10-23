#include"main.h"
#include<stdio.h>

/**
 * _puts - display character
 * @str:line to display
 *
 */

void _puts(char *str)
{
	if (str != NULL)
	{
		while (*str)
		{
			_putchar(*str);
			str++;
		}
	_putchar('\n');
	}
}
