#include<stdio.h>
#include"main.h"
#include<stdlib.h>
#include<ctype.h>

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
	else if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			char *arg = argv[i];
			int j = 0;

			while (arg[j] != '\0')
			{
				if (arg[j] < '0' || arg[j] > '9')
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum += atoi(arg);
		}
		printf("%d\n", sum);
	}
	return (0);
}
