#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function to copy the content of a file to another file
 * @argc: argument coutner
 * @argv: argument value
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int file_from, file_to;
	ssize_t bytesRead, bytesWritten;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytesRead = read(file_from, buffer, 1024)) > 0)
	{
		bytesWritten = write(file_to, buffer, bytesRead);
		if (bytesRead != bytesWritten)
			return (0);
	}
	close(file_from);
	close(file_to);
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
