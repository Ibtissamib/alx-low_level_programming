#include "main.h"
/**
 * times_table- prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, p, f, l;

	for (i = 0; i <= 9; i++)
	{
		_putchar(0 + '0');
		_putchar(',');
		for (j = 1; j <= 9; j++)
		{
			p = i * j;
			f = p / 10;
			l = p % 10;
			_putchar(' ');
			if (f == 0)
				_putchar(' ');
			else
				_putchar(f + '0');
			_putchar(l + '0');
			if (j != 9)
				_putchar(',');
			else
				_putchar('\n');
		}
	}
}


