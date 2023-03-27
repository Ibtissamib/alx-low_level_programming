#include "main.h"
/**
 * swap_int- swaps the values of two integers
 * @a: Integer
 * @b: Integer
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
