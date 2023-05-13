#include "main.h"
#include <unistd.h>
/**
 * print_class-prints class
 * @c: Character
 *
 * Return: void
 */
void print_class(char c)
{
	printf("  Class:                             ");
	switch (c)
	{
		case 0:
			printf("none");
			break;
		case 1:
			printf("ELF32");
			break;
		case 2:
			printf("ELF64");
			break;
	}
	printf("\n");
}
/**
 * print_data- prints
 * @c: char
 *
 * Return: void
 */

void print_data(char c)
{
	printf("  Data:                              ");
	switch (c)
	{
		case 0 :
			printf("none");
			break;
		case 1 :
			printf("2's complement, little endian");
			break;
		case 2:
			printf("2's complement, big endian");
			break;
	}
	printf("\n");
}
/**
 * print_version- prints
 * @c: char
 *
 * Return: void
 */

void print_version(char c)
{
	printf("  Version:                           ");
	switch (c)
	{
		case 1:
			printf("1 (current)");
			break;
		default:
			printf("%c",c);
			break;
	}
	printf("\n");
}
/**
 * print_OSABI- prints
 * @c: char
 *
 * Return: void
 */

void print_OSABI(char c)
{
	printf("  OS/ABI:                            ");
	switch (c)
	{
		case 0:
			printf("UNIX - System V");
			break;
		case 1:
			printf("Hewlett-Packard HP-UX");
			break;
		case 2:
			printf("UNIX - NetBSD");
			break;
		case 3:
			printf("Linux");
			break;
		case 6:
			printf("UNIX - Solaris");
			break;
		case 7:
			printf("AIX");
			break;
		case 8:
			printf("IRIX");
			break;
		case 9:
			printf("FreeBSD");
			break;
		case 10:
			printf("Compaq TRU64 UNIX");
			break;
		case 11:
			printf("Novell Modesto");
			break;
		case 12:
			printf("Open BSD");
			break;
		case 13:
			printf("Open VMS");
			break;
		case 14:
			printf("Hewlett-Packard Non-Stop Kerne");
			break;
		default:
			printf("<unknown: %x>", c);
			break;
	}
	printf("\n");
}
/**
 * print_ABI- prints
 * @c: char
 *
 * Return: void
 */
void print_ABI_Version(char c)
{
	printf("  ABI Version:                       %x\n", c);
}

/**
 * main-Entry point copies the content of a file to another file.
 * @ac: Integer
 * @av: double pointer to char
 *
 * Return: Integer
 */
int main(int ac, char **av)
{
	int fd, i;
	unsigned char buf[3000];

	if (ac != 2)
	{
		dprintf(2, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	read(fd, buf, 3000);
	if (buf[0] != 127 || buf[1] != 69 || buf[2] != 76 || buf[3] != 70)
	{
		dprintf(2, "Error: %s is not ELF file\n", av[1]);
		exit(98);
	}
	printf("ELF Header:\n  Magic:   ");
	for (i = 0; i < 16; i++)
	{
		if ((buf[i] == 0 || buf[i] == 1) && i != 15)
		       	printf("0%x ", buf[i]);
		else if (i == 15)
			printf("0%x\n", buf[i]);
		else
			printf("%x ", buf[i]);
	}
	print_class(buf[4]);
	print_data(buf[5]);
	print_version(buf[6]);
	print_OSABI(buf[7]);
	print_ABI_Version(buf[8]);
	close(fd);
	return (0);
}
