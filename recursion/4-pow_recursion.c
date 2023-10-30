#include"main.h"

/**
 * _pow_recursion - caculate the value of x by the power of y
 * @x: base value
 * @y: the power
 * Return: the result of calculation
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (_pow_recursion(x, y - 1) * x);
	if (y >= 0)
		return (1);
	else
		return (-1);
}
