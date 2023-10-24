#include"main.h"

/**
 * puts_half - print half of the string
 * @str: the string
 *
 */

void puts_half(char *str)
{
	int len = 0;
	int n;
	int i;

	while (str[len] != '\0')
	{
		len++;
		n = (len - 1) / 2;
	}

	if (len % 2 != '0')
	{
		_putchar(n);
	}
	for (i = n + 1 ; i < len ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
