#include "main.h"
/**
 * print_number- prints an integer.
 * @n: Integer
 *
 * Return: Void
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar(45);
		m = -n;
	}
	else
	       m = n;
	if (m / 10)
		print_number(m / 10);
	_putchar((m % 10) + '0');
}
