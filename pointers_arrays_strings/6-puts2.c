#include"main.h"
#include<stdio.h>

/**
 * puts2 - print every +2 char
 * @str: the string to be printed
 *
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
		if (str[i] == '\0')
			break;
	}
		_putchar('\n');
}
