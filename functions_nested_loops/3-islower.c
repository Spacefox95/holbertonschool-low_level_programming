#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - check lowercase character
 * @c : character to check
 * Return: If lowercase = 1, else 0
 *
 */

int _islower(int c)
{
	int temp;

	if (islower(c) > 0)
	{
		temp = 1;
	}
	else
	{
		temp = 0;
	}
	return (temp);
}

