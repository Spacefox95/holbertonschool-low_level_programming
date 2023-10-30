#include"main.h"

/**
 * find - function to guess the square equals n
 * @n: Number we are testing
 * @r: the natural square root number
 * Return: success
 */

int find(int n, int r)
{
	if (r * r == n)
		return (r);
	if (r * r > n)
		return (-1);
	return (find(n, r + 1));
}

/**
 * _sqrt_recursion - recurse until we find a natural root
 * @n: number we are testing
 * Return: Success
 */


int _sqrt_recursion(int n)
{
	return (find(n, 1));
}
