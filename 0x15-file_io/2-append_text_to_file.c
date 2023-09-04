#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - function appends text to the end of a file
 * @filename: name of the file to append to
 * @text_content: content to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_result;
	size_t text_length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length] != '\0')
			text_length++;

		write_result = write(fd, text_content, text_length);
		if (write_result == -1 || (size_t)write_result != text_length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
