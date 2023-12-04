#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *buffer;
	int file, file2;
	ssize_t bytesRead, bytesWritten;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR, S_IRGRP, S_IWGRP | S_IROTH);
	if (file2 == -1)
	{
		close(file);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	buffer = (char *)malloc(1024);
	if (buffer == NULL)
	{
		close(file);
		close(file2);
		return (0);
	}
	while ((bytesRead = read(file, buffer, 1024)) > 0)
	{
		bytesWritten = write(file2, buffer, bytesRead);
		if (bytesRead != bytesWritten)
		{
			close(file);
			close(file2);
			free(buffer);
			return (0);
		}
	}
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", file);
		exit(100);
	}
	if (close(file2) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", file2);
		exit(100);
	}
	close(file);
	close(file2);
	return (0);
}
