#include <stdio.h>
#include "main.h"

/**
 * safe_close - closes a file descriptor and handles error
 * @fd: the file descriptor to close
 */
void safe_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * error_exit - prints an error, closes fds, and exits
 * @code: exit code
 * @msg: error message format string
 * @filename: file name for message
 * @fd1: first fd to close
 * @fd2: second fd to close
 */
void error_exit(int code, const char *msg, const char *filename,
		int fd1, int fd2)
{
	dprintf(STDERR_FILENO, msg, filename);
	if (fd1 >= 0)
		safe_close(fd1);
	if (fd2 >= 0)
		safe_close(fd2);
	exit(code);
}

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: the arguments passed to main
 *
 * Return: 0 if success otherwise defined by exit codes
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to;
	char buff[BUF_SIZE];
	ssize_t bytes;
	int file_from_fd, file_to_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	file_from_fd = open(file_from, O_RDONLY);
	if (file_from_fd < 0)
		error_exit(98, "Error: Can't read from file %s\n", file_from, -1, -1);

	file_to_fd = open(file_to, O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (file_to_fd < 0)
		error_exit(99, "Error: Can't write to %s\n", file_to, file_from_fd, -1);

	while ((bytes = read(file_from_fd, buff, BUF_SIZE)) > 0)
	{
		if (write(file_to_fd, buff, bytes) != bytes)
			error_exit(99, "Error: Can't write to %s\n", file_to, file_from_fd,
				   file_to_fd);
	}
	if (bytes == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from,
			   file_from_fd, file_to_fd);

	safe_close(file_from_fd);
	safe_close(file_to_fd);
	return (0);
}

