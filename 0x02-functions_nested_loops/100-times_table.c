#include "main.h"
/**
 * print_times_table- prints the n times table, starting with 0.
 * @n: Integer
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i = 0, j = 1, p, u, t, h;

	if ((n >= 0) && (n <= 15))
		while (i <= n)
		{
			_putchar(0 + '0');
			while (j <= n)
			{
				p = i * j;
				h = p / 100;
				t = (p % 100) / 10;
				u = (p % 100) % 10;
				_putchar(',');
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
				j++;
			}
			_putchar('\n');
			j = 1;
			i++;
		}
}
