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
	int i = 0, j = 0, k = 0;

	if (size <= 0)
		printf("\n");
	while (i < size) 
	{
		printf("%08x: ", i);
		if ((i + 10) >= size)
			i = size - 10;
		while (j <= (9 + i))
		{
			printf("%02x", *(b + j));
			printf("%02x ", *(b + j + 1));
			j = j + 2;
		}
		if ((i + 10) >= size)
			while (j <= ((size - (size % 10) + 9)))
			{
				printf("     ");
				j = j + 2;
			}	
		while (k <= (9 + i))
		{
			if (*(b + k) < 32)
				printf(".");
			else
				printf("%c", *(b + k));
			k++;
		}
		printf("\n");
		i = i + 10;
	}
}
