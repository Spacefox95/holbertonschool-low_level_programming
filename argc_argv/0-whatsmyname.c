#include<stdio.h>
#include"main.h"

/**
 * main - print the name of the program
 * @argc: ok
 * @argv: command to find the name of the first argument.
 * Return: 0 is success
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
