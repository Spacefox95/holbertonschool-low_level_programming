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

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			sum = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
