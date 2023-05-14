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
		case 0:
			printf("none");
			break;
		case 1:
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
			printf("%c", c);
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
{	printf("  OS/ABI:                            ");
	switch (c)
	{	case 0:
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
			break; }
	printf("\n"); }
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
void print_type(char c)
{
	printf("  Type:                              ");
	switch (c)
	{
		case 0:
			printf("none");
			break;
		case 1:
			printf("RELOC (Relocatable file)");
			break;
		case 2:
			printf("EXEC (Executable file)");
			break;
		case 3: printf("DYN (Shared object file)");
			break;
		case 4:
			printf("Core file");
			break;
	}
	printf("\n");
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
	int fd, i, j;
	unsigned char buf[100];

	if (ac != 2)
	{	dprintf(2, "Usage: elf_header elf_filename\n");
		exit(98); }
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{	dprintf(2, "Error: Can't read from %s\n", av[1]);
		exit(98); }
	read(fd, buf, 100);
	if (buf[0] != 127 || buf[1] != 69 || buf[2] != 76 || buf[3] != 70)
	{	dprintf(2, "Error: %s is not ELF file\n", av[1]);
		exit(98); }
	printf("ELF Header:\n  Magic:   ");
	for (i = 0; i < 16; i++)
	{	if ((buf[i] < 9) && i != 15)
			printf("0%x ", buf[i]);
		else if ((buf[i] < 9) && i == 15)
			printf("0%x\n", buf[i]);
		else
			printf("%x ", buf[i]); }
	print_class(buf[4]);
	print_data(buf[5]);
	print_version(buf[6]);
	print_OSABI(buf[7]);
	print_ABI_Version(buf[8]);
	if (buf[5] == 1)
	{	print_type(buf[16]);
		printf("  Entry point address:               0x");
		if (buf[27] == 0 && buf[26] == 0)
                                printf("%x%x", buf[25], buf[24]);
		else
			for (i = 27; i >= 24; i--)
			{
				if (i != 27 && buf[i] <= 9)
					printf("0%x", buf[i]);
				else
					printf("%x", buf[i]);
			}
	} 
	else if (buf[5] == 2)
	{	print_type(buf[17]);
		printf("  Entry point address:               0x");
		i = 24;
		while (i <= 27 && buf[i] == 0)
			i++;
		j = i;
		while (i <= 27)
		{
			if (buf[i] <= 15 && i != j && buf[i] != 0)
                                printf("0%x", buf[i]);
			else if (buf[i] != 0)
				printf("%x", buf[i]);
		i++;
		}
       	}
	printf("\n");
	for (i = 16; i <= 30; i++)
		printf("%x ", buf[i]);
	close(fd);
	return (0);
}
