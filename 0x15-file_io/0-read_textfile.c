#include "main.h"

/**
 * read_textfile -  function reads a text file
 * and prints it to the POSIX standard output.
 *
 * @filename: is a pointer to file
 * @letters: number of lettters to output.
 *
 * Return: actual number of letters it could
 * read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd_to_open, fd_to_read, fd_to_write;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	fd_to_open = open(filename, O_RDONLY);
	fd_to_read = read(fd_to_open, buf, letters);
	fd_to_write = write(STDOUT_FILENO, buf, fd_to_read);

	if (fd_to_open == -1 || fd_to_write == -1 ||
	fd_to_read == -1 || fd_to_write != fd_to_read)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd_to_open);

	return (fd_to_write);
}
