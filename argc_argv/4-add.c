#include<stdio.h>
#include"main.h"
#include<stdlib.h>

/**
 * main - calculate two arguments numbers
 * @argc: first number
 * @argv: second number
 * Return: 0 is Success
 *
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			int num = atoi(argv[i]);

			if (num == 0 && argv[i][0] != '0')
			{
				printf("Error\n");
				return (1);
			}
			if (num < 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += num;
		}
		printf("%d\n", sum);
	}
	return (0);
}
