#include "main.h"
#include <stdio.h>
/**
 * print_array- prints n elements of an array of integers
 * followed by a new line.
 * @a: pointer to Integer
 * @n: Integer
 *
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf("\n");
	else
		for (i = 0; i < n; i++)
		{
			printf("%d", *(a + i));
			if (i != (n - 1))
				printf(", ");
			else
				printf("\n");
		}
}

