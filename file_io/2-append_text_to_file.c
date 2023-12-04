#include "main.h"
#include <string.h>

/**
 * append_text_to_file - function to append text at the end
 * @filename: name of the file
 * @text_content: content to append at the end of the file
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
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
