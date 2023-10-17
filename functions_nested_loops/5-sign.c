#include <stdio.h>
#include "main.h"

/**
 * print_sign - check number
 * @n : character to check
 * Return: If pos = 1, if neg = -1, else =0
 */

int print_sign(int n)
{
	int temp;

		if (n > 0)
		{
			_putchar('+');
			temp = 1;
		}
		if (n == 0)
		{
			_putchar('0');
			temp = 0;
		}
		if (n < 0)
		{
			_putchar('-');
			temp = -1;
		}
		return (temp);
}
