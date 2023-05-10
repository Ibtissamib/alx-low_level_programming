#include "main.h"
/**
 * create_file-  creates a file.
 * @filename: const pointer to char
 * @text_content: pointer to char
 * Return: Integer
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n = 0, len = 0;

	while (text_content[len])
		len++;
	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		n = write(fd, text_content, len);
	close(fd);
	if (n == len)
		return (1);
	else
		return (-1);
}
