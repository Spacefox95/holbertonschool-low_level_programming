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
	int sum = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
}
