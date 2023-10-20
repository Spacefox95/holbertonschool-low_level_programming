#include<stdio.h>
#include"main.h"
#include<ctype.h>

/**
 * _isupper - check uppercase character
 * @c : character to check
 * Return: If uppercase = 1, else 0
 *
 */

int _isupper(int c)
{
	int t;

	if (isupper(c) > 0)
	{
		t = 1;
	}
	else
	{
		t = 0;
	}
	return (t);
}
