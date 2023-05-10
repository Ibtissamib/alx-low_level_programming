#include "main.h"

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output
 * @filename: const char
 * @letters: size_t
 *
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n = 0;
	char *buf;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters + 1));
	n = read(fd, buf, letters);
	n = write(STDOUT_FILENO, buf, n);
	close(fd);
	free(buf);
	return (n);
}
