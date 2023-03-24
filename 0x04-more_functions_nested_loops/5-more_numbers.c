#include "main.h"
/**
 * more_numbers- prints 10 times the numbers, from 0 to 14
 * followed by a new line.
 *
 * Return: Void
 */
void more_numbers(void)
{
	int i = 0, j = 10, t, u;
	int a[20];

	while (i <= 19)
	{
		t = i / 10;
		if (t == 0)
		{
			a[i] = i;
			i++;
		}
		else
		{
			u = j % 10;
			a[i] = 1;
			a[i + 1] = u;
			i = i + 2;
			j++;
		}
	}
	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i <= 19; i++)
			_putchar(a[i] + '0');
	_putchar('\n');
	}
}
