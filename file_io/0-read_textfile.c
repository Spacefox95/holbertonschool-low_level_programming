#include "main.h"

/**
 * read_textfile - function that read a text file
 * and print the number of letter
 * @filename: name of the file to read
 * @letters: letters counter
 * Return: number of letter, 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t bytesRead;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);
	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	bytesRead = read(file, buffer, letters);
	if (bytesRead == -1)
	{
		close(file);
		free(buffer);
		return (0);
	}
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten != bytesRead)
	{
		close(file);
		free(buffer);
		return (0);
	}
	close(file);
	free(buffer);
	return (bytesRead);
}
