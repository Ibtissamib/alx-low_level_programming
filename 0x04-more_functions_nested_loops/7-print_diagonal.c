#include "main.h"
/**
 * print_diagonal- draws a diagonal line on the terminal.
 *@n: Integer
 *
 * Return: Void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (j < i)
					_putchar(' ');
				else if (i == j)
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
}

