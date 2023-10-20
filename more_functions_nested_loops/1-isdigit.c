#include"main.h"
#include<ctype.h>
#include<stdio.h>

/**
 * _isdigit - check last digit
 * @c : character to check
 * Return: If it's a digit = 1, else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
