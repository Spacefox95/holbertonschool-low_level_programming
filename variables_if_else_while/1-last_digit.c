#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - description
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	o = n % 10;
	printf("The last digit of %d is %d", n, o);
	if (o == 0)
	{
		printf(" and is 0\n");
	}
	else if (o > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (o < 6)
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
