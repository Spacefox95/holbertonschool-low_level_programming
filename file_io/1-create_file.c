#include "main.h"
#include <string.h>

/**
 * create_file - function that creates a file
 * @filename: name of the file created
 * @text_content: string to write to the file
 * Return: -1 if failed, 1 if success
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytesWritten = write(file, text_content, strlen(text_content));
		if (bytesWritten == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
