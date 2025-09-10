#include "main.h"
#include "_strlen.c"

/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: a  NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created, file can not
 *	   be written, write "fails", etc...)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t err_no;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
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
