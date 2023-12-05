#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - function to copy the content of a file to another file
 * @argc: argument coutner
 * @argv: argument value
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
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
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		close(file_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytesRead = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytesWritten = write(file_to, buffer, bytesRead);
		if (bytesRead != bytesWritten)
		{
			close(file_from);
			close(file_to);
			return (0);
		}
	}
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
