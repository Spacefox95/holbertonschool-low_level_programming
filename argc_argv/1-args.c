#include<stdio.h>
#include<stdlib.h>

/**
 * main - function to print the number of argument
 * @argv: if there is arguments
 * @argc: number of arguments
 * Return: 0 is Success
 */

int main(int argc, char **argv)
{
	if (**argv != 0)
		printf("%d\n", argc - 1);

	return (0);
}
