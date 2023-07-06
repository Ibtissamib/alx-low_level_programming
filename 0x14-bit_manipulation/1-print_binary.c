#include "main.h"
#include <stdio.h>
/**
 * print_binary- prints the binary representation of a number.
 * @n: unsigned long int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int bt = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int start = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (bt != 0)
	{
		if ((n & bt) != 0)
		{
			_putchar('1');
			start = 1;
		}
		else if (start == 1)
			_putchar('0');
		bt = bt >> 1;
	}

}

