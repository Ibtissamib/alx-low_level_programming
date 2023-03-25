#include "main.h"
#include <stdlib.h>
/**
 * print_number- prints an integer.
 * @n: Integer
 *
 * Return: Void
 */
void print_number(int n)
{
	int i, j, k, l, m;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	i = n / 10000;
	j = (n % 10000) / 1000;
	k = (n % 1000) / 100;
	l = (n % 100) / 10;
	m = n % 10;
	if (i != 0)
	{
		_putchar(i + '0');
		_putchar(j + '0');
		_putchar(k + '0');
		_putchar(l + '0');
		_putchar(m + '0');
	}
	else if (j != 0)
	{
		_putchar(j + '0');
		_putchar(k + '0');
		_putchar(l + '0');
		_putchar(m + '0');
	}
	else if (k != 0)
	{
		_putchar(k + '0');
		_putchar(l + '0');
		_putchar(m + '0');
	}
	else if (l != 0)
	{
		_putchar(l + '0');
		_putchar(m + '0');
	}
	else
		_putchar(m + '0');
}
