#include "main.h"
/**
 * print_times_table- prints the n times table, starting with 0.
 * @n: Integer
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, p, u, t, h;

	if ((n >= 0) && (n <= 15))
		for (i = 0; i <= n; i++)
		{
			_putchar(0 + '0');
			_putchar(',');
			for (j = 1; j <= n; j++)
			{
				p = i * j;
				h = p / 100;
				t = (p % 100) / 10;
				u = (p % 100) % 10;
				_putchar(' ');
				if (h != 0)
				{
					_putchar(h + '0');
					_putchar(t + '0');
				}
				else
				{
					_putchar(' ');
					if (t != 0)
						_putchar(t + '0');
					else
						_putchar(' ');
				}
				_putchar(u + '0');
				if (j != n)
					_putchar(',');
				else
					_putchar('\n');
			}
		}
}
