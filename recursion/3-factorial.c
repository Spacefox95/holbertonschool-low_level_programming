#include"main.h"

/**
 * factorial - print the factorial of a give number
 * @n: number to factorise
 * Return: return the factorial number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
