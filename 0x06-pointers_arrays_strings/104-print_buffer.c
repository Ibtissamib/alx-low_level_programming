#include "main.h"
#include <stdio.h>
/**
 * print_buffer- prints a buffer.
 * @b: pointer to char
 * @size: integer
 * Return: Void
 */
void print_buffer(char *b, int size)
{
	int i = 0, j = 0;

	if (size <= 0)
		printf("\n");
	while (i < size)
	{
		printf("%08x: ", i);
		while (j <= 9)
		{
			if ((i + j) >= size)
				printf("  ");
			else
				printf("%02x", *(b + i + j));
			if ((j % 2) != 0 && j != 0)
				printf(" ");
			j++;
		}
		j = 0;
		while (j <= 9)
		{
			if ((i + j) >= size)
				break;
			else if (*(b + j + i) < 32)
				printf(".");
			else
				printf("%c", *(b + j + i));
			j++;
		}
		j = 0;
		if (i >= size)
			continue;
		printf("\n");
		i = i + 10;
	}
}
