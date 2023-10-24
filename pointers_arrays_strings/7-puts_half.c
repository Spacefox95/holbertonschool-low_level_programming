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

	while (str[len])
	{
		len++;
	}

	if (len % 2 == '0')
		n = len / 2;
	else
	{
		n = (len - 1) / 2;
	}

	for (i = n + 1 ; i < len ; i++)
		_putchar(str[i]);

	_putchar('\n');
}
