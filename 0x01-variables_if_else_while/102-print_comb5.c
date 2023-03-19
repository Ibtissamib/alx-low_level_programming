#include <stdio.h>
/**
 * main - Entry point
 *
 * prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	i = 48;
	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			k = i;
			l = j + 1;
			while (k <= 57)
			{
				while (l <= 57)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if ((i != 57) || (j != 56))
					{
						putchar (',');
						putchar (' ');
					}
					l++;
				}
			l = 48;
			k++;
			}
		j++;
		}
	i++;
	}
	putchar('\n');
	return (0);
}
