#include "main.h"

/**
 * read_textfile - reads a text file and prints to the POSIX standard output
 * @filename: name of the file to be read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print, if the file
 *	   cannot be read or opened or if filename is NULL or if write fails
 *	   0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count = 0, total = 0, to_read, err_no;
	char buff[BUF_SIZE];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);


	while (letters > 0)
	{
		to_read = (letters < BUF_SIZE) ? letters : BUF_SIZE;
		count = read(fd, buff, to_read);
		if (count <= 0)
			break;

		err_no = write(STDOUT_FILENO, buff, count);
		if (err_no == -1)
		{
			close(fd);
			return (0);
		}

		total += count;
		letters -= count;
	}

	close(fd);
	return (total);
}
