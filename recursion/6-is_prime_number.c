#include"main.h"

/**
 * prime_recursive - compare n and d
 * @n: number to check
 * @d: divisor of n
 * Return: Success
 */

int prime_recursive(int n, int d)
{
	if (d == n)
		return (1);
	if (n % d == 0)
		return (0);
	return (prime_recursive(n, d + 1));
}

/**
 * is_prime_number - check if it's a prime number
 * @n: number to check
 * Return: Success
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_recursive(n, 2));
}
