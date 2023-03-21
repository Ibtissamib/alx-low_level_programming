#include "main.h"
/**
 * print_last_digit- prints the last digit of a number.
 * @a: int
 *
 * Return: Integer: the last digit
 */
int print_last_digit(int a)
{
	int r;

	r = a % 10;
	if (r < 0)
	{
		_putchar(-r + '0');
		return (-r);
	}
	else
	{
		_putchar(r + '0');
		return (r);
	}
}

