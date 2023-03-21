#include "main.h"
/**
 * jack_bauer- prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: Void
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;
	j = 0;
	while (i <= 23)
	{
		while (j <= 59)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
	j = 0;
	i++;
	}
}
