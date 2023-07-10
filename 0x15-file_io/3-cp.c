#include "main.h"
#define ERR_NORD "Error: Can't read from file %s\n"
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
	ssize_t n = 0;
	char buf[1024];

	if (argc != 3)
	{	dprintf(2, "Usage: cp file_from file_to\n");
		exit(97); }
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{	dprintf(STDERR_FILENO, ERR_NORD, argv[1]);
		exit(98); }
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{	dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while ((n = read(fd_from, &buf[0], 1024)) > 0)
		if (write(fd_to, &buf[0], n) != n)
		{	dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99); }
	if (n == -1)
	{	dprintf(STDERR_FILENO, ERR_NORD, argv[1]);
		exit(98); }
	fd_from = close(fd_from);
	fd_to = close(fd_to);
	if (fd_from)
	{	dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100); }
	if (fd_to)
	{	dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100); }
	return (0);
}
