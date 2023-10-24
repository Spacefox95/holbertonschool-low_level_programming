#include"main.h"

/**
 * print_rev - to print string in reverse
 * @s: variable to display
 *
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = len ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
