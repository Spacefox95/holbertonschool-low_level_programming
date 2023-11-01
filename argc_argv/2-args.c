#include"main.h"
#include<stdio.h>

/**
 * main - program that prings all arguments
 * @argc: argument counter
 * @argv: arguments displayer
 * Return: Success
 */

int main(int argc, char **argv)
{
	int i;

	if (argc != 0)
	{
		for (i = 0 ; i < argc ; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
