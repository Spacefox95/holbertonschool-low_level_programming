#include"main.h"
#include<ctype.h>

/**
 * _isdigit - check last digit
 * @c : character to check
 * Return: If it's a digit = 1, else 0
 */

int _isdigit(int c);
{
	int t;

	if (isdigit(c) > 0)
	{
		t = 1;
	}
	else
	{
		t = 0;
	}
	return (t);
}
