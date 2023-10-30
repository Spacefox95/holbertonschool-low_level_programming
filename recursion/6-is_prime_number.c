#include"main.h"

/**
 *
 *
 *
 */

int prime_recursive(int n, int d)
{
	if (d == n)
		return (1);
	if (n % d == 0)
		return (0);
	return (prime_recursive(n, d + 1));
}

int is_prime_number(int n)
{
	 if (n <= 1)
        {
                return (0);
        }
        return (prime_recursive(n, 2));
}
