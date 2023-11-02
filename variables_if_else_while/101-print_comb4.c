#include<stdio.h>

/**
 * main - ok
 * Return: Success
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0' ; i <= '7' ; i++)
	{
		for (j = i + 1 ; j <= '8' ; j++)
		{
			for (k = j + 1 ; k <= '9' ; k++)
			{
				if (i != j || i != k || j != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i != '7' || j != '8' || k != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
