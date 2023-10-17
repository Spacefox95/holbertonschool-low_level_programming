#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isalpha - alphabetic order
 * @c : character to check
 * Return: If lowercase = 1, else 0
 *
 */

int _isalpha(int c)
{
	int temp;

	if (isalpha(c) > 0)
	{
		temp = 1;
	}
	else
	{
		temp = 0;
	}
	return (temp);
}

