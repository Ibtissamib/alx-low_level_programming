#include "main.h"
/**
 * main-Entry point
 * @argc: Integer
 * @argv: double pointer to char
 *
 * Return: Integer
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	ssize_t n_from = 0, n_to = 0;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	n_from = read(fd_from, &buf[0], 1024);
	n_to = write(fd_to, &buf[0], n_from);
	close(fd_from);
	close(fd_to);
	if (n_to == n_from)
		return (1);
	else
		return (-1);
}
