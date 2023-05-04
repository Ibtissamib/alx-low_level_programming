#include "main.h"
/**
 * print_binary- prints the binary representation of a number.
 * @n: unsigned long int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int p = 1;

	if (n == 0 || n == 1)
		_putchar(n + '0');
	while (n >= p)
		p = p * 2;
	p = p / 2;
	while (n >= 2)
	{
		n = n - p;
		_putchar('1');
		p = p / 2;
		while (n < p)
		{
			p = p / 2;
			_putchar('0');
		}
	}
	if (n == 1)
		_putchar('1');
}
