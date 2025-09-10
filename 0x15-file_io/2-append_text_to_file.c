#include "main.h"
#include "_strlen.c"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: the file to be appended to
 * @text_content: the content to be appended to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t err_no;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	err_no = write(fd, text_content, _strlen(text_content));
	if (err_no == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
